#include "Player.hpp"

Player::Player()
{

}

Player::~Player()
{

}

/*•Ï”‰Šú‰»*/
bool Player::Initialize(Vector3 position, LPCTSTR player_name)
{
	charactor = GraphicsDevice.CreateSpriteFromFile(player_name);
	this->position = position;
	return true;
}

/*‰æ‘œ•`‰æ*/
void Player::Draw()
{
	SpriteBatch.Draw(*charactor, position);
}