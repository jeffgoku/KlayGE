// Renderable.hpp
// KlayGE 可渲染对象类 头文件
// Ver 2.7.0
// 版权所有(C) 龚敏敏, 2003-2005
// Homepage: http://klayge.sourceforge.net
//
// 2.7.0
// GetWorld改名为GetModelMatrix (2005.6.17)
//
// 2.3.0
// 增加了Render (2005.1.15)
//
// 修改记录
//////////////////////////////////////////////////////////////////////////////////

#ifndef _RENDERABLE_HPP
#define _RENDERABLE_HPP

#include <KlayGE/PreDeclare.hpp>
#include <KlayGE/Matrix.hpp>

#ifdef KLAYGE_DEBUG
	#pragma comment(lib, "KlayGE_Core_d.lib")
#else
	#pragma comment(lib, "KlayGE_Core.lib")
#endif

namespace KlayGE
{
	// Abstract class defining the interface all renderable objects must implement.
	class Renderable : public boost::enable_shared_from_this<Renderable>
	{
	public:
		virtual ~Renderable();

		virtual RenderEffectPtr GetRenderEffect() const = 0;
		virtual VertexBufferPtr GetVertexBuffer() const = 0;
		virtual std::wstring const & Name() const = 0;

		virtual void OnRenderBegin();
		virtual void OnRenderEnd();

		virtual Box GetBound() const = 0;

		virtual void AddToRenderQueue();

		void Render();
	};
}

#endif		//_RENDERABLE_HPP
