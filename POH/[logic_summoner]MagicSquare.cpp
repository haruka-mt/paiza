#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool findAnswer(bool row, vector< vector<int> > &magic, int size, int magicSum, int unknown, int durtyRow, int durtyCol)
{
	bool answer;
	int sum = 0;
	int i;

	//cout << unknown << " " << durtyRow << ";" << durtyCol << endl;
	magic[durtyRow][durtyCol] = unknown;

	if(row == true)
	{
		for(i = 0; i < size; ++i)
		{
			sum += magic[durtyRow][i];
		}
	}else
	{
		for(i = 0; i < size; ++i)
		{
			sum += magic[i][durtyCol];
		}
	}

	//cout << sum << ":" << magicSum << endl << endl;

	if(sum == magicSum)
	{
		answer = true;
	}else
	{
		answer = false;
	}

	return answer;
}

int main(void)
{
    int size;
    int durtyRow[2];
    int durtyCol[2];
    int unknownNumber[2];
    int count = 0;
    int magicSum = 0;
    bool sumFlag = false;
    bool firstAnswer;
    int tmp;
    int i, j;

    cin >> size;

    vector< vector<int> > magic(size, vector<int>(size));
    vector<bool> number(size*size, false);

    for(i = 0; i < size; ++i)
    {
    	for(j = 0; j < size; ++j)
    	{
    		cin >> tmp;
    		magic[i][j] = tmp;
    		if(tmp != 0)
    		{
    			number[tmp - 1] = true;
    		}else
    		{
    			durtyRow[count] = i;
    			durtyCol[count] = j;
    			count++;
    		}
    	}
    }

    count = 0;

    for(i = 0; i < size; ++i)
    {
    	for(j = 0; j < size; ++j)
    	{
    		if(number[i*size+j] == 0)
    		{
    			unknownNumber[count] = (i * size + j) + 1;
    			count++;
    		}
    	}
    }

    count = 0;

    for(i = 0; i < size; ++i)
    {
    	if(i == durtyRow[0] || i == durtyRow[1])
    	{
    		continue;
    	}
    	for(j = 0; j < size; ++j)
    	{
    		if(magic[i][j] == 0)
    		{
    			magicSum = 0;
    			break;
    		}else
    		{
    			//cout << magic[i][j] << endl;
    			magicSum += magic[i][j];
    		}
    	}
    	if(magicSum != 0)
    	{
    		break;
    	}

    }
    //cout << magicSum << endl;

    if(durtyRow[0] == durtyRow[1])
    {
    	firstAnswer = findAnswer(false, magic, size, magicSum, unknownNumber[0], durtyRow[0], durtyCol[0]);
    }else
    {
    	firstAnswer = findAnswer(true, magic, size, magicSum, unknownNumber[0], durtyRow[0], durtyCol[0]);
    }

    if(firstAnswer)
    {
    	magic[durtyRow[0]][durtyCol[0]] = unknownNumber[0];
    	magic[durtyRow[1]][durtyCol[1]] = unknownNumber[1];
    }else
    {
    	magic[durtyRow[0]][durtyCol[0]] = unknownNumber[1];
    	magic[durtyRow[1]][durtyCol[1]] = unknownNumber[0];
    }

    for(i = 0; i < size; ++i)
    {
    	for(j = 0; j < size; ++j)
    	{
    		if(j == size-1)
    		{
    			cout << magic[i][j] << endl;
    		}else
    		{
    			cout << magic[i][j] << " ";    			
    		}
    	}
    }

    return 0;
}
