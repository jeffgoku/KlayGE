DOWNLOAD_FILE("KlayGE/Samples/media/PostProcessing/font.dds" "cbda47a1678ce70b6720856736100979d469e159")

SET(SOURCE_FILES
	${KLAYGE_PROJECT_DIR}/Samples/src/PostProcessing/PostProcessing.cpp
	${KLAYGE_PROJECT_DIR}/Samples/src/PostProcessing/AsciiArtsPP.cpp
	${KLAYGE_PROJECT_DIR}/Samples/src/PostProcessing/CartoonPP.cpp
	${KLAYGE_PROJECT_DIR}/Samples/src/PostProcessing/NightVisionPP.cpp
	${KLAYGE_PROJECT_DIR}/Samples/src/PostProcessing/PostProcessing.cpp
	${KLAYGE_PROJECT_DIR}/Samples/src/PostProcessing/TilingPP.cpp
)

SET(HEADER_FILES
	${KLAYGE_PROJECT_DIR}/Samples/src/PostProcessing/PostProcessing.hpp
	${KLAYGE_PROJECT_DIR}/Samples/src/PostProcessing/AsciiArtsPP.hpp
	${KLAYGE_PROJECT_DIR}/Samples/src/PostProcessing/CartoonPP.hpp
	${KLAYGE_PROJECT_DIR}/Samples/src/PostProcessing/NightVisionPP.hpp
	${KLAYGE_PROJECT_DIR}/Samples/src/PostProcessing/PostProcessing.hpp
	${KLAYGE_PROJECT_DIR}/Samples/src/PostProcessing/TilingPP.hpp
)

SET(EFFECT_FILES
	${KLAYGE_PROJECT_DIR}/Samples/media/PostProcessing/AsciiArtsPP.fxml
	${KLAYGE_PROJECT_DIR}/Samples/media/PostProcessing/CartoonPP.fxml
	${KLAYGE_PROJECT_DIR}/Samples/media/PostProcessing/NightVisionPP.fxml
	${KLAYGE_PROJECT_DIR}/Samples/media/PostProcessing/OldFashion.fxml
	${KLAYGE_PROJECT_DIR}/Samples/media/PostProcessing/TilingPP.fxml
)

SET(POST_PROCESSORS
	${KLAYGE_PROJECT_DIR}/Samples/media/PostProcessing/OldFashion.ppml
)

SET(UI_FILES
	${KLAYGE_PROJECT_DIR}/Samples/media/PostProcessing/PostProcessing.uiml
)

SET(CONTENT_FILES
	${KLAYGE_PROJECT_DIR}/bin/KlayGE.cfg
	${KLAYGE_PROJECT_DIR}/media/Fonts/gkai00mp.kfont
	${KLAYGE_PROJECT_DIR}/media/Models/indirect_light_proxy.meshml.model_bin
	${KLAYGE_PROJECT_DIR}/media/Models/point_light_proxy.meshml.model_bin
	${KLAYGE_PROJECT_DIR}/media/Models/spot_light_proxy.meshml.model_bin
	${KLAYGE_PROJECT_DIR}/media/PostProcessors/Copy.ppml
	${KLAYGE_PROJECT_DIR}/media/PostProcessors/Copy2LightBuffer.ppml
	${KLAYGE_PROJECT_DIR}/media/PostProcessors/Depth.ppml
	${KLAYGE_PROJECT_DIR}/media/PostProcessors/LensEffects.ppml
	${KLAYGE_PROJECT_DIR}/media/PostProcessors/MultiRes.ppml
	${KLAYGE_PROJECT_DIR}/media/PostProcessors/PostToneMapping.ppml
	${KLAYGE_PROJECT_DIR}/media/PostProcessors/Resizer.ppml
	${KLAYGE_PROJECT_DIR}/media/PostProcessors/RSM2VPLs.ppml
	${KLAYGE_PROJECT_DIR}/media/PostProcessors/TAA.ppml
	${KLAYGE_PROJECT_DIR}/media/RenderFX/Blur.kfx
	${KLAYGE_PROJECT_DIR}/media/RenderFX/CascadedShadow.kfx
	${KLAYGE_PROJECT_DIR}/media/RenderFX/Copy.kfx
	${KLAYGE_PROJECT_DIR}/media/RenderFX/Copy2LightBuffer.kfx
	${KLAYGE_PROJECT_DIR}/media/RenderFX/DeferredRendering.kfx
	${KLAYGE_PROJECT_DIR}/media/RenderFX/DeferredRenderingDebug.kfx
	${KLAYGE_PROJECT_DIR}/media/RenderFX/Depth.kfx
	${KLAYGE_PROJECT_DIR}/media/RenderFX/GBufferNoSkinning.kfx
	${KLAYGE_PROJECT_DIR}/media/RenderFX/GBufferSkinning64.kfx
	${KLAYGE_PROJECT_DIR}/media/RenderFX/GBufferSkinning128.kfx
	${KLAYGE_PROJECT_DIR}/media/RenderFX/Font.kfx
	${KLAYGE_PROJECT_DIR}/media/RenderFX/LensEffects.kfx
	${KLAYGE_PROJECT_DIR}/media/RenderFX/LightSourceProxy.kfx
	${KLAYGE_PROJECT_DIR}/media/RenderFX/LightIndexedDeferredRendering4.kfx
	${KLAYGE_PROJECT_DIR}/media/RenderFX/LightIndexedDeferredRendering32.kfx
	${KLAYGE_PROJECT_DIR}/media/RenderFX/MultiRes.kfx
	${KLAYGE_PROJECT_DIR}/media/RenderFX/Particle.kfx
	${KLAYGE_PROJECT_DIR}/media/RenderFX/PostToneMapping.kfx
	${KLAYGE_PROJECT_DIR}/media/RenderFX/Resizer.kfx
	${KLAYGE_PROJECT_DIR}/media/RenderFX/RSM2VPLs.kfx
	${KLAYGE_PROJECT_DIR}/media/RenderFX/SkyBox.kfx
	${KLAYGE_PROJECT_DIR}/media/RenderFX/SSGI.kfx
	${KLAYGE_PROJECT_DIR}/media/RenderFX/SSR.kfx
	${KLAYGE_PROJECT_DIR}/media/RenderFX/SSVO.kfx
	${KLAYGE_PROJECT_DIR}/media/RenderFX/SumLum.kfx
	${KLAYGE_PROJECT_DIR}/media/RenderFX/TAA.kfx
	${KLAYGE_PROJECT_DIR}/media/RenderFX/TileBasedDeferredRendering.kfx
	${KLAYGE_PROJECT_DIR}/media/RenderFX/ToneMapping.kfx
	${KLAYGE_PROJECT_DIR}/media/RenderFX/VPLsLighting.kfx
	${KLAYGE_PROJECT_DIR}/media/RenderFX/UI.kfx
	${KLAYGE_PROJECT_DIR}/media/Textures/2D/powered_by_klayge.dds
	${KLAYGE_PROJECT_DIR}/media/Textures/2D/ui.dds
	${KLAYGE_PROJECT_DIR}/media/Textures/2D/white_noise_tex.dds
	${KLAYGE_PROJECT_DIR}/media/Textures/3D/color_grading.dds
	${KLAYGE_PROJECT_DIR}/media/Textures/Cube/rnl_cross_c.dds
	${KLAYGE_PROJECT_DIR}/media/Textures/Cube/rnl_cross_y.dds
	${KLAYGE_PROJECT_DIR}/Samples/media/PostProcessing/AsciiArtsPP.kfx
	${KLAYGE_PROJECT_DIR}/Samples/media/PostProcessing/CartoonPP.kfx
	${KLAYGE_PROJECT_DIR}/Samples/media/PostProcessing/font.dds
	${KLAYGE_PROJECT_DIR}/Samples/media/PostProcessing/NightVisionPP.kfx
	${KLAYGE_PROJECT_DIR}/Samples/media/PostProcessing/OldFashion.kfx
	${KLAYGE_PROJECT_DIR}/Samples/media/PostProcessing/TilingPP.kfx
	${KLAYGE_PROJECT_DIR}/Samples/media/Common/dino50.meshml.model_bin
)

IF(KLAYGE_PLATFORM_WINDOWS_RUNTIME)
	SET(PACKAGE_GUID "AC840C84-9653-4F0C-BC5D-E30D102E5BEA")
ENDIF()

SETUP_SAMPLE(PostProcessing)
