#include <iostream>

using namespace std;

int main(void)
{
	int NeedStamina, CurrentStamina;

	cin >> NeedStamina >> CurrentStamina;

	if(NeedStamina <= CurrentStamina){
		cout << CurrentStamina - NeedStamina << endl;
	}else{
		cout << "No" << endl;
	}


	return 0;
}