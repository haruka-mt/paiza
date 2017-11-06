#include <iostream>

using namespace std;

int main(void)
{
	int t, m;
	cin >> t >> m;

	if(t >= 25 && m <= 40)
	{
		cout << "No" << endl;
	}else if(t >= 25 || m <= 40)
	{
		cout << "Yes" << endl;
	}else
	{
		cout << "No" << endl;
	}

	return 0;
}