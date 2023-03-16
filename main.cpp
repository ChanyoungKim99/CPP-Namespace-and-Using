#include <iostream>

namespace Game
{
	class Warrior
	{
	};

	void Print()
	{
	}

	const int MAX_NUMBER{ 10 };
}		// 공간 안에 모아놓음

namespace GUI
{
	void Print()
	{
	}
}

using namespace Game;
// using을 통해 열리게된다면, 범위해결 연산자를 안써도 된다.
using namespace std;
// using은 못쓰는 단어가 생기게 되므로 주의해서 써야한다.
// ex) std안의 min함수가 존재하므로 int min;을 못쓰게 됨

int main()
{
	Game::Print();			// 범위 해결 연산자 사용
	Game::Warrior w;

	GUI::Print();

	// 똑같은 이름의 함수들을 그룹핑해서 사용할 수 있게된다.

	Print();

	cout << "hello" << endl;
	cout << min(3, 4) << endl;

	string x1;

}