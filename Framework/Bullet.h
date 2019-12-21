#pragma once
#include "GameObject.h"
#include "GameScene.h"
class Bullet :
	public GameObject
{
public:
	float speed;
	float angle;
	float speedRate;	//���ӵ�
	float angleRate;	//���ӵ�

	GameObject* master;	
	GameScene* game;
public:
	Bullet(const wchar_t* uri); 
	~Bullet();

	void OnUpdate();		
	void OnLateUpdate();
	void Move();
	bool CheckOutOfScreen();
	void OnDestroy();
};

