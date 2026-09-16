#pragma once

#include "CContext.h"

class CRenderer
{
private:
	CContext m_context;

public:
	CRenderer();
	~CRenderer();

	void Initialize();
	void CleanUp();
};