#include "stdafx.h"
#include "Player.h"


Player::Player() :
	GameObject(L"resources/player.png"), moveSpeed(10.0f)
{
	
}

void Player::Update()
{
	std::cout << "������Ʈ"<<std::endl;
}

void Player::Move()
{
}
