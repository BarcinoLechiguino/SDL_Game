#ifndef __APPLICATION_H__
#define __APPLICATION_H__

#include "Globals.h"

#define NUM_MODULES 13

class ModuleWindow;
class ModuleInput;
class ModuleTextures;
class ModuleRender;
class ModuleParticles;
class ModuleSceneSpace;
class ModuleSceneIntro;
class ModulePlayer;
class ModuleFadeToBlack;
class ModuleAudio;
class ModuleCollision;
class ModuleEnemies;
class ModuleSlowdown;
class Module;

class Application
{
public:

	Module* modules[NUM_MODULES];
	ModuleWindow* window;
	ModuleRender* render;
	ModuleInput* input;
	ModuleTextures* textures;
	ModuleSceneSpace* scene_space;
	ModuleSceneIntro* scene_intro;
	ModuleCollision* collision;
	ModulePlayer* player;
	ModuleFadeToBlack* fade;
	ModuleAudio* audio;
	ModuleParticles* particles;
	ModuleEnemies* enemies;
	ModuleSlowdown* slowdown;

public:

	Application();
	~Application();

	bool Init();
	update_status Update();
	bool CleanUp();

};

// Global var made extern for Application ---
extern Application* App;

#endif // __APPLICATION_H__