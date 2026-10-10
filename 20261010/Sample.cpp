#include<iostream>
using namespace std;

class Player
{
public:
	int hp = 100;

	void Damage()
	{
		hp -= 10;
	}
};

class Enemy
{
public:
	Player ply;
	Player* pPly;
};


int main(void)
{
	//Playerのオブジェクトをインスタンス化
	Player player;
	cout << "PlayerHP:" << player.hp <<  endl;

	//Playerのオブジェクトのアドレスをポインタに保存する
	//*をアドレスを渡したい変数の前に、＆を受け取る側の変数の前につける
	Player* pPlayer = &player;

	//ポインタを使ってDamage関数を呼び出すこともできます
	pPlayer->Damage();

	cout << "PlayerHP:" << player.hp << endl;


	return 0;
}