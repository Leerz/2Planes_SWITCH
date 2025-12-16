#include "Landscape_green.h"
 

LandscapeGreen::LandscapeGreen(){
	background_tex_id = BACKGROUND_2;
}

LandscapeGreen::~LandscapeGreen(){
	
}

void LandscapeGreen::DrawBackground(){
    vec2_t pos(0, 0);
    render->DrawTexture(texture_manager->GetTexture(background_tex_id), pos);
}

void LandscapeGreen::DrawForeground(){
}

void LandscapeGreen::Control(float delta){  
    
} 

