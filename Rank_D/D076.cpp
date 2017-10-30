#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string word, NG;
    cin >> NG >> word;

    if(string::npos != word.find(NG))
    {
        cout << "NG" << endl;
    }else
    {
        cout << word << endl;
    }
    
    return 0;
}