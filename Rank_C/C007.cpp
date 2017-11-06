#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string tag1, tag2;
	string str;
	int i;

	cin >> tag1 >> tag2;
	cin >> str;

	int begin , end = -1;

	bool lock = false;
	for(i = 0; i < str.length(); ++i)
	{
		//cout << str.substr(i, tag2.length()) << endl;
		if(str[i] == '<' && str.substr(i, tag1.length()) == tag1 && lock == false)
		{
			begin = i + tag1.length();
			lock = true;
		}
		if(str[i] == '<' && str.substr(i, tag2.length()) == tag2 && lock == true)
		{
			end = i;
			//cout << begin <<  end <<endl;
			if(end - begin > 0){
				cout << str.substr(begin, end - begin) << endl;
				lock = false;
			}else{
				cout << "<blank>" << endl;
			}
		}
		
		
	}

	if(end == -1)
	{
		cout << "<blank>" << endl;
	}
	

	return 0;
}