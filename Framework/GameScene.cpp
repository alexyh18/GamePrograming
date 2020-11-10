#include "stdafx.h"
#include "GameScene.h"

void GameScene::Initialize()
{
	background = new GameObject(L"resources/background.png");
	Push(background);

	player = new Player();
	Push(player);

}
