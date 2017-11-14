#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main(void)
{
	int sum = 0;
	int tmp, i;
	double ave;
	double answer;

	
	for(i = 0; i < 7; ++i)
	{
		cin >> tmp;
		sum += tmp;
	}

	ave = sum / 7.0;
	ave *= 100;
	tmp = (int)ave % 10;
	ave /= 100;

	if(tmp == 5)
	{
		ave += 0.04;
	}

	printf("%.1f\n", ave);

	return 0;
}