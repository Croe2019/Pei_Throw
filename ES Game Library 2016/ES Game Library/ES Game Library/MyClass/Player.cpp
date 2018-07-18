#include "Player.hpp"

Player::Player()
{

}

Player::~Player()
{

}

/*変数初期化*/
bool Player::Initialize(Vector3 position, LPCTSTR player_name)
{
	charactor = GraphicsDevice.CreateSpriteFromFile(player_name);
	this->position = position;
	return true;
}

/*画像描画*/
void Player::Draw()
{
	SpriteBatch.Draw(*charactor, position);
}