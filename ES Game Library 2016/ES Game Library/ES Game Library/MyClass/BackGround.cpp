#include "BackGround.hpp"

BackGround::BackGround()
{

}

BackGround::~BackGround()
{

}

/*�ϐ�������*/
bool BackGround::Initialize()
{
	back_ground = GraphicsDevice.CreateSpriteFromFile(_T("Stage/BackGround.png"));
	return true;
}

/*�摜�`��*/
void BackGround::Draw()
{
	SpriteBatch.Draw(*back_ground, Vector3(0.0f, 0.0f, 0.0f));
}