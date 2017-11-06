#include <iostream>
#include <vector>
#include <algorithm>

#include <stdio.h>

using namespace std;

int main(void)
{
	int n, m, top;
	int i, j;
	double tmp;
	int round;
	vector<double> c;
	vector<double> val;
	vector<double> ans;

	cin >> n >> m >> top;
	for(i = 0; i < n; ++i)
	{
		cin >> tmp;
		c.push_back(tmp);
	}

	for(i = 0; i < m; ++i)
	{
		val.push_back(0);
		for(j = 0 ; j < n; ++j)
		{
			cin >> tmp;
			val[i] += tmp * c[j];
		}
		round = val[i] * 10;
		round = round % 10;
		if(round >= 5)
		{
			ans.push_back(val[i] + 0.5);
		}else
		{
			ans.push_back(val[i]);
		}
	}

	sort(ans.begin(), ans.end(), greater<int>());
	for(i = 0; i < top; ++i)
	{
		printf("%.0f\n", ans[i]);
	}

	return 0;
}