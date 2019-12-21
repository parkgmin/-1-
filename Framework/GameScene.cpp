#include "pch.h"
#include "GameScene.h"
#include "Player.h"
#include "Enemy.h"
#include "GameManager.h"


GameScene::GameScene()
{
}


GameScene::~GameScene()
{
  for(auto i = gameObjectList.begin(); i !=gameObjectList.end(); i++)
	  if (*i == GAMEMGR)
	  {
		  gameObjectList.erase(i);
		  break;
	  }
}


void GameScene::Initialize()
{
	//��ҹ��� ����, �ڱ� ���� �̸� ����, jpgpng���x
	GameObject* bg =
		new GameObject(
		L"image/Background.jpg");
	bg->pos.x = 512.0f;
	bg->pos.y = 384.0f;
	bg->scale.x = 4.6f;		//�̹��� ũ�� 1.0f��
	bg->scale.y = 4.6f;		//�̹��� ũ�� 1.0f��
	PushBackGameObject(bg);

	Player* player 
		= new Player(L"image/Player.png");
	player->pos.x = 500.0f;
	player->pos.y = 680.0f;
	player->scale.x = 0.3f;
	player->scale.y = 0.3f;
	PushBackGameObject(player);

	Enemy* e1
		= new Enemy(L"image/Enemy1.png");
	e1->pos.x = 500.0f;
	e1->pos.y = 120.0f;
	e1->scale.x = 0.3f;
	e1->scale.y = 0.3f;
	PushBackGameObject(e1);

	/*Enemy* e2
		= new Enemy(
		L"Resources/Enemy3.png",
		L"Resources/Bullet1.png"
		);
	e2->pos.x = 700.0f;
	e2->pos.y = 100.0f;
	PushBackGameObject(e2);*/

	GAMEMGR->player = player;
	GAMEMGR->enemyList.push_back(e1);
	/*GAMEMGR->enemyList.push_back(e2);*/
}