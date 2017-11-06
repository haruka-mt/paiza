#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int sunny = 0;
	int rainy = 0;
	int len, i;
	string str;

	cin >> len >>str;

	for(i = 0; i < len; ++i)
	{
		if(str[i] == 'S')
		{
			sunny++;
		}else{
			rainy++;
		}
	}

	cout << sunny << " " << rainy << endl;

	return 0;
}