#include "Player.hpp"

Player::Player()
{

}

Player::~Player()
{

}

/*�ϐ�������*/
bool Player::Initialize(Vector3 position, LPCTSTR player_name)
{
	charactor = GraphicsDevice.CreateSpriteFromFile(player_name);
	this->position = position;
	return true;
}

/*�摜�`��*/
void Player::Draw()
{
	SpriteBatch.Draw(*charactor, position);
}