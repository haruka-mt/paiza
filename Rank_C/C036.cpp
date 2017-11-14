#include <iostream>

using namespace std;

int main(void)
{
	int num[4];
	int time[4];

	int i;
	for(i = 0; i < 4; ++i)
	{
		cin >> num[i];
	}
	for(i = 0; i < 4; ++i)
	{
		cin >> time[i];
	}

	int winner[2];
	for(i = 0; i < 2; ++i)
	{
		if(time[num[i*2]-1] < time[num[i*2+1]-1])
		{
			winner[i] = num[i*2];
		}else
		{
			winner[i] = num[i*2+1];
		}
	}

	int tmp;
	if(winner[1] < winner[0])
	{
		tmp = winner[1];
		winner[1] = winner[0];
		winner[0] = tmp;
	}

	int second_time[2];
	cin >> second_time[0] >> second_time[1];

	if(second_time[0] > second_time[1])
	{
		tmp = winner[1];
		winner[1] = winner[0];
		winner[0] = tmp;
	}

	cout << winner[0] << endl << winner[1] << endl;


	return 0;
}