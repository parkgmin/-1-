#pragma once
#include "GameObject.h"
class Enemy : public GameObject
{
private:
	float timer;
public:
	float delay;
	const wchar_t* bulletUri;
	int hp;

	int direction;
	int speed;

public:
	Enemy(const wchar_t* uri); //�׳�
	Enemy(
		const wchar_t* uri,
		const wchar_t* bulletUri); //�Ѿ� ���� ������
	~Enemy();

	bool Hit(int damage);		//�ǰ� �� �Ͼ ��

	void OnUpdate();			//������Ʈ
	void Move();				//������ ����
	void Angle();
	virtual void Shoot(float angle, float speed,
		float angleRate, float speedRate);
								//�Ѿ� �߻� ����
};

