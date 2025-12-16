#pragma once 
#include <algorithm> 
#include <vector> 
#include <cctype>
#include "Landscape.h"
#include "Timer.h"
#include "vec2.h"


#define LANDSCAPE_GREEN 1

class LandscapeGreen :public Landscape{
    int background_tex_id; 

public:

	LandscapeGreen();
	~LandscapeGreen();

	virtual void DrawBackground();
	virtual void DrawForeground();

	virtual void Control(float delta);
 
};
