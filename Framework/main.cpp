#include "stdafx.h"
#include "Framework.h"
#include "GameScene.h"
#include "MainScene.h"

int main()
{
	Framework* f = new Framework;
	//���� Scene, ���� Ÿ��Ʋ, �ػ�(����, ����), â��� ���θ� �����մϴ�.
	f->Run(new MainScene(),L"Ÿ��Ʋ", 1920,1080, false);
	SAFE_DELETE(f);

	return 0;
}