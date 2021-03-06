PROJECT(DXSDK)

CMAKE_MINIMUM_REQUIRED(VERSION 2.8.6)

IF(COMMAND cmake_policy)
	CMAKE_POLICY(SET CMP0003 NEW)
ENDIF(COMMAND cmake_policy)

SET(DXSDK_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../..")
SET(KLAYGE_ROOT_DIR "${DXSDK_DIR}/../..")

INCLUDE(${KLAYGE_ROOT_DIR}/cmake/Common.cmake)
INCLUDE(${KLAYGE_ROOT_DIR}/cmake/Platform.cmake)
INCLUDE(${KLAYGE_ROOT_DIR}/cmake/Compiler.cmake)

SET(KLAYGE_BIN_DIR "${DXSDK_DIR}/../../KlayGE/bin/${KLAYGE_PLATFORM_NAME}")
SET(D3DCOMPILER_NAME "d3dcompiler_47.dll")
SET(REL_PATH "External/Downloads/DXSDK.7z")
SET(DST_PATH "${KLAYGE_ROOT_DIR}/External/DXSDK/Include/D3D11.h")
SET(SEVENZIP_PATH "${KLAYGE_ROOT_DIR}/External/Downloads/${KLAYGE_PLATFORM_NAME}/7z")

SET(REGEN FALSE)
IF(EXISTS ${DST_PATH})
	SET(D3D11_VERSION_STR 0)
	FILE(STRINGS ${DST_PATH} D3D11_VERSION_STR REGEX "#define	D3D11_SDK_VERSION")
	STRING(FIND "${D3D11_VERSION_STR}" "7" POS)
	IF(NOT POS EQUAL 28)
		SET(REGEN TRUE)
	ENDIF()
ELSE()
	SET(REGEN TRUE)
ENDIF()

IF(REGEN)
	IF(KLAYGE_PLATFORM_WINDOWS)
		DOWNLOAD_FILE("External/Downloads/${KLAYGE_PLATFORM_NAME}/7z.exe" "cbda47a1678ce70b6720856736100979d469e159")
		DOWNLOAD_FILE("External/Downloads/${KLAYGE_PLATFORM_NAME}/7z.dll" "cbda47a1678ce70b6720856736100979d469e159")
	ELSE()
		DOWNLOAD_FILE("External/Downloads/${KLAYGE_PLATFORM_NAME}/7z" "cbda47a1678ce70b6720856736100979d469e159")
		DOWNLOAD_FILE("External/Downloads/${KLAYGE_PLATFORM_NAME}/7z.so" "cbda47a1678ce70b6720856736100979d469e159")
		FILE(COPY ${SEVENZIP_PATH} DESTINATION "${KLAYGE_ROOT_DIR}/External/Downloads")
		FILE(COPY "${KLAYGE_ROOT_DIR}/External/Downloads/7z" DESTINATION "${KLAYGE_ROOT_DIR}/External/Downloads/${KLAYGE_PLATFORM_NAME}/" FILE_PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE)
	ENDIF()
	DOWNLOAD_FILE(${REL_PATH} "cbda47a1678ce70b6720856736100979d469e159")

	EXECUTE_PROCESS(COMMAND "${SEVENZIP_PATH}" "x" "-y" "${KLAYGE_ROOT_DIR}/${REL_PATH}" WORKING_DIRECTORY "${KLAYGE_ROOT_DIR}/External/DXSDK")
ENDIF()

IF(KLAYGE_PLATFORM_WINDOWS)
	SET(D3DCOMPILER_ARCH_NAME ${KLAYGE_ARCH_NAME})
ELSE()
	SET(D3DCOMPILER_ARCH_NAME "x86")
ENDIF()
SET(SRC_PATH "${DXSDK_DIR}/Redist/${D3DCOMPILER_ARCH_NAME}/${D3DCOMPILER_NAME}")
SET(REDIST_PATH "${KLAYGE_BIN_DIR}/${D3DCOMPILER_NAME}")
ADD_CUSTOM_COMMAND(OUTPUT ${REDIST_PATH}
	COMMAND ${CMAKE_COMMAND} -E copy_if_different ${SRC_PATH} ${REDIST_PATH})
ADD_CUSTOM_TARGET(Redist ALL DEPENDS ${REDIST_PATH})
