#include "Player.hpp"
#include "Player1Move.hpp"
#include "Player2Move.hpp"

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

/*�X�V*/
void Player::Update()
{
	position = player_move_interface->Move(position);
}

/*�v���C���[�P�𐶐�*/
Player Player::CreatePlayer1()
{
	Player *player1 = new Player();
	player1->SetMove(new Player1Move());
	return *player1;
}

/*�v���C���[�Q�𐶐�*/
Player Player::CreatePlayer2()
{
	Player *player2 = new Player();
	player2->SetMove(new Player2Move());
	return *player2;
}

void Player::SetMove(PlayerMoveinterface *player_move_interface)
{
	this->player_move_interface = player_move_interface;
}

/*�摜�`��*/
void Player::Draw()
{
	SpriteBatch.Draw(*charactor, position);
}