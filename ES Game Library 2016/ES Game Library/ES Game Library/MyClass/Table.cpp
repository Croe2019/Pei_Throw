#include "Table.hpp"

Table::Table()
{

}

Table::~Table()
{

}

/*�ϐ�������*/
bool Table::Initialize()
{
	table = GraphicsDevice.CreateSpriteFromFile(_T("Stage/Table.png"), Color(255, 255, 255));
	return true;
}

/*�e�[�u���̗̈�����߂�*/
Rect Table::GetRect()
{
	table_rect.left = 500.0f;
	table_rect.right = 784.0f;
	table_rect.top = 0.0f;
	table_rect.bottom = 690.0f;
	return table_rect;
}

/*�摜�`��*/
void Table::Draw()
{
	SpriteBatch.Draw(*table, Vector3(500.0f, 0.0f, 0.0f));
}