#include <iostream>

using namespace std;

int main(void)
{
    int num, sum = 0;
    int flag;
    int i, j;

    cin >> num;
    for (i = 0; i < num; ++i)
    {
        string correct, ans;
        cin >> correct >> ans;

        if(correct.length() == ans.length())
        {
            flag = 2;
            for (j = 0; j < correct.length(); ++j)
            {
                if(correct[j] != ans[j])
                {
                    flag--;
                }

                if(flag == 0)
                {
                    break;
                }
            }

            sum += flag;
        }
    }

    cout << sum << endl;
    return 0;
}