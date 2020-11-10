#pragma once
#include "Scene.h"
#include "Player.h"

class GameScene :
    public Scene
{
public:
    GameObject* background;
    Player* player;
    void Initialize();
};

