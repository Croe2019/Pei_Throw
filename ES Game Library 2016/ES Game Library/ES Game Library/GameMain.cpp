// #include "Extension\DirectX11\DXGraphics11.hpp"
#include "StdAfx.h"
#include "GameMain.h"

/// <summary>
/// Allows the game to perform any initialization it needs to before starting to run.
/// This is where it can query for any required services and load all of your content.
/// Initialize will enumerate through any components and initialize them as well.
/// </summary>
bool GameMain::Initialize()
{
	// TODO: Add your initialization logic here
	WindowTitle(_T("ES Game Library"));

	/*背景クラス初期化*/
	back_ground.Initialize();
	/*テーブルクラス初期化*/
	table.Initialize();
	/*プレイヤークラス初期化*/
	charactor1 = Player::CreatePlayer1();
	charactor2 = Player::CreatePlayer2();
	charactor1->Initialize(Vector3(1180.0f, 260.0f, 0.0f), _T("Players/Player1.png"));
	charactor2->Initialize(Vector3(0.0f, 260.0f, 0.0f), _T("Players/Player2.png"));

	return true;
}

/// <summary>
/// Finalize will be called once per game and is the place to release
/// all resource.
/// </summary>
void GameMain::Finalize()
{
	// TODO: Add your finalization logic here

}

/// <summary>
/// Allows the game to run logic such as updating the world,
/// checking for collisions, gathering input, and playing audio.
/// </summary>
/// <returns>
/// Scene continued value.
/// </returns>
int GameMain::Update()
{
	// TODO: Add your update logic here

	charactor1->Update();
	charactor2->Update();

	return 0;
}

/// <summary>
/// This is called when the game should draw itself.
/// </summary>
void GameMain::Draw()
{
	// TODO: Add your drawing code here
	GraphicsDevice.Clear(Color_CornflowerBlue);

	GraphicsDevice.BeginScene();


	SpriteBatch.Begin();

	back_ground.Draw();
	table.Draw();
	charactor1->Draw();
	charactor2->Draw();

	SpriteBatch.End();

	GraphicsDevice.EndScene();
}
