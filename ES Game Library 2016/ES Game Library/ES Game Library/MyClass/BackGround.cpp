#include "BackGround.hpp"

BackGround::BackGround()
{

}

BackGround::~BackGround()
{

}

/*変数初期化*/
bool BackGround::Initialize()
{
	back_ground = GraphicsDevice.CreateSpriteFromFile(_T("Stage/BackGround.png"));
	return true;
}

/*画像描画*/
void BackGround::Draw()
{
	SpriteBatch.Draw(*back_ground, Vector3(0.0f, 0.0f, 0.0f));
}