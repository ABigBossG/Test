#include <iostream>

using namespace std;

void func(char ch, int k)
{
	for (int i = 0; i < k; i++)
	{
		cout << ch << " ";
	}
}

int main()
{
	char ch;
	int k;
	cin >> ch;
	cin >> k;
	func(ch, k);
	system("pause");
	return 0;
}
