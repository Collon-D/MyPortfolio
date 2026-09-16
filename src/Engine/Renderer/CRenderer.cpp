#include "CRenderer.h"

CRenderer::CRenderer()
{

}

CRenderer::~CRenderer()
{

}

void CRenderer::Initialize()
{
	m_context.Initialize();
}

void CRenderer::CleanUp()
{
	m_context.CleanUp();
}
