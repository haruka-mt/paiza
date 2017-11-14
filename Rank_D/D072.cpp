#include <iostream>

using namespace std;

int main(void)
{
	int x, y, p;
	cin >> x >> y >> p;

	int num = x/y;
	if(x % y != 0)
	{
		num += 1;
	}

	cout << num*p << endl;

	return 0;
}