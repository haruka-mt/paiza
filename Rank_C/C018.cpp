#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int n, m;
    string food;
    int num;
    cin >> n;

    vector<string> recipeFood, havingFood;
    vector<int> recipeNum, havingNum;
    for (int i = 0; i < n; ++i)
    {
        cin >> food >> num;
        recipeFood.push_back(food);
        recipeNum.push_back(num);
    }

    cin >> m;
    for (int i = 0; i < m; ++i)
    {
        cin >> food >> num;
        havingFood.push_back(food);
        havingNum.push_back(num);
    }

    int min = INT32_MAX;
    int pos, amount;
    for (int i = 0; i < n; ++i)
    {
        pos = -1;
        for (int j = 0; j < m; ++j)
        {
            if (recipeFood[i] == havingFood[j])
            {
                pos = j;
                break;
            }
        }

        if (pos == -1)
        {
            cout << 0 << endl;
            return 0;
        }
        else
        {
            amount = havingNum[pos] / recipeNum[i];
            if (amount < min)
            {
                min = amount;
            }
        }
    }
    cout << min << endl;
    return 0;
}