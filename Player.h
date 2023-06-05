#pragma once
#include "WorldTransform.h"
#include"Model.h"
#include"Input.h"
#include"PlayerBullet.h"
#include <list>

class Player {
public:
	~Player();
	void Initialize(Model*model,uint32_t textureHandle);
	void Rotate();
	void Update();
	void Draw(ViewProjection& viewProjection);
	void Attack();

private:
	WorldTransform worldTransform_;
	Model* model_ = nullptr;
	uint32_t textureHandle_=0u;
	Player* player_ = nullptr;
	Input* input_=nullptr;
	//PlayerBullet* bullet_ = nullptr;
	std::list<PlayerBullet*> bullets_;
};