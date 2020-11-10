#include "stdafx.h"
#include "GameScene.h"

void GameScene::Initialize()
{
	std::cout << "»ý¼ºµÊ/n";
	background = new GameObject(L"resources/background.png");
	Push(background);

	player = new Player();
	Push(player);

}
