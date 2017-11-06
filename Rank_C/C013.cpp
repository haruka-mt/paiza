#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	int n, m;
	int room;
	int room_number;
	int i;

	cin >> n >> m;
	bool flag1, flag2 = true;

	for(i = 0 ; i < m; ++i)
	{
		cin >> room;
		room_number = room;
		flag1 = false;
		while(room > 0)
		{
			if(room % 10 == n)
			{
				flag1 = true;
				break;
			}else{
				room /= 10;
			}
		}

		flag2 *= flag1;

		//cout << flag1 << flag2 << endl;
		if(flag1 == false)
		{
			cout << room_number << endl;
		}
	}

	if(flag2 == true)
	{
		cout << "none" << endl;
	}

	return 0;
}