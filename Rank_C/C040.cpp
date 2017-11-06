#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
	int number;
	double min = 100;
	double max = 200;

	double height;
	string result;
	int i;

	cin >> number;

	for(i = 0; i < number; ++i)
	{
		cin >> result >> height;
		if(result == "le" && height < max)
		{
			max = height;
		}else if(result == "ge" && height > min)
		{
			min = height;
		}
	}

	cout << fixed << setprecision(1) << min << " " << fixed << setprecision(1) << max << endl;

	return 0;
}