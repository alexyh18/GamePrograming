#pragma once
#include "GameObject.h"
class Player :
    public GameObject
{
public:
    float moveSpeed;
    void Update();
    void Move();
    Player();
};

