#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	int x, y, r, noise;
	int num;

	int t_x, t_y;
	int i;

	cin >> x >> y >> r;
	cin >> num;
	noise = pow(r, 2);

	for(i = 0; i < num; ++i)
	{
		cin >> t_x >> t_y;
		if(pow(t_x - x, 2) + pow(t_y - y, 2) >= noise)
		{
			cout << "silent" << endl;
		}else
		{
			cout << "noisy" << endl;
		}
	}


	return 0;
}