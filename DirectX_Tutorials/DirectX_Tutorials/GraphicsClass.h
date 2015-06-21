#pragma once

//////////////
// INCLUDES //
//////////////
#include <windows.h>

///////////////////////
// MY CLASS INCLUDES //
///////////////////////
#include "d3dclass.h"

/////////////
// GLOBALS //
/////////////
const bool FULL_SCREEN = false;
const bool VSYNC_ENABLED = true;
const float SCREEN_DEPTH = 1000.0f;
const float SCREEN_NEAR = 0.1f;


class GraphicsClass
{
public:
	GraphicsClass(void);
	GraphicsClass(const GraphicsClass&);
	virtual ~GraphicsClass(void);

	bool Initialize(int, int, HWND);
	void Shutdown();
	bool Frame();

private:
	bool Render();

private:
	D3DClass* m_D3D;
};
