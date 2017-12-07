#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string s1, s2;
    cin >> s1 >> s2;

    if(s1[s1.length()-1] == s2[0] && s2[s2.length()-1] != 'n')
    {
        printf("OK\n");
    }
    else
    {
        printf("NG\n");
    }
    return 0;
}