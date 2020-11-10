#pragma once
#include "GameObject.h"
#include "InputManager.h"
#include "TimeManager.h"
class Player :
    public GameObject
{
public:
    float moveSpeed;
    void Update();
    void Move();
    Player();
};

