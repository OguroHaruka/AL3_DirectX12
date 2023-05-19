#pragma once
#include "WorldTransform.h"
#include"Model.h"
#include"Input.h"

class Player {
public:
	void Initialize(Model*model,uint32_t textureHandle);
	void Update();
	void Draw(ViewProjection& viewProjection);
	

private:
	WorldTransform worldTransform_;
	Model* model_ = nullptr;
	uint32_t textureHandle_=0u;
	Player* player_ = nullptr;
	Input* input_=nullptr;
};