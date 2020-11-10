#include "stdafx.h"
#include "Player.h"


Player::Player() :
	GameObject(L"resources/player.png"), moveSpeed(300.0f)
{
	
}

void Player::Update()
{
	Move();
}

void Player::Move()
{
	Vector2 input;
	if (InputManager::GetKeyState('W'))
	{
		input.y += 1.0f;
	}
	if (InputManager::GetKeyState('S')) {
		input.y -= 1.0f;
	}
	if (InputManager::GetKeyState('D'))
	{
		input.x += 1.0f;
	}
	if (InputManager::GetKeyState('A')) {
		input.x -= 1.0f;
	}
	if (input.y != 0.0f|| input.x != 0.0f) {
		input = input.normalized();
		transform->position.y += moveSpeed * input.y * TimeManager::GetDeltaTime();
		transform->position.x += moveSpeed * input.x * TimeManager::GetDeltaTime();

	}
}
