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
}		// ���� �ȿ� ��Ƴ���

namespace GUI
{
	void Print()
	{
	}
}

using namespace Game;
// using�� ���� �����Եȴٸ�, �����ذ� �����ڸ� �Ƚᵵ �ȴ�.
using namespace std;
// using�� ������ �ܾ ����� �ǹǷ� �����ؼ� ����Ѵ�.
// ex) std���� min�Լ��� �����ϹǷ� int min;�� ������ ��

int main()
{
	Game::Print();			// ���� �ذ� ������ ���
	Game::Warrior w;

	GUI::Print();

	// �Ȱ��� �̸��� �Լ����� �׷����ؼ� ����� �� �ְԵȴ�.

	Print();

	cout << "hello" << endl;
	cout << min(3, 4) << endl;

	string x1;

}