#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int row;
int col;

struct blockMap
{
    int i;
    int j;
};

void blockMapping(int i, int j, vector< vector<char> > &block, vector< vector<int> > &map, vector<blockMap> &info, int blockNum)
{
    if(map[i][j] == 0 && block[i][j] != ' ')
    {
        blockMap tmp;
        map[i][j] = blockNum;
        tmp.i = i;
        tmp.j = j;
        info.push_back(tmp);

        //cout << i << ":" << j << endl;
        if(i != 0)
        {
            if(block[i][j] == block[i-1][j])
            {
                blockMapping(i-1, j, block, map, info, blockNum);
            }
        }
        if(j != 0)
        {
            if(block[i][j] == block[i][j-1])
            {
                blockMapping(i, j-1, block, map, info, blockNum);
            }
        }
        if(i != row - 1)
        {
            if(block[i][j] == block[i+1][j])
            {
                blockMapping(i+1, j, block, map, info, blockNum);
            }

        }
        if(j != col - 1)
        {
            if(block[i][j] == block[i][j+1])
            {
                blockMapping(i, j+1, block, map, info, blockNum);
            }

        }
    }

    return;
}


bool blockErase(vector< vector<char> > &block, vector< vector<int> > &map, int eraseCount)
{
    int i, j, k;
    int swapCount = 0;
    vector< int> skipCol(col);
    int itr = 0;

    for(i = row-1; i >= 0; --i)
    {
        for(j = col-1; j >= 0; --j)
        {
            map[i][j] = 0;
            if(skipCol.size() != 0 && skipCol[itr] == j)
            {
                itr++;
                continue;
            } 

            if(block[i][j] == ' ')
            {
                eraseCount++;
                for(k = i-1; k >= 0; --k)
                {
                    if(block[k][j] != ' ')
                    {
                        swap(block[k][j], block[i][j]);
                        swapCount++;
                        break;
                    }
                }
                if(k == -1)
                {
                    skipCol.push_back(j);
                }
            }
        }

        itr = 0;
    }

    if(eraseCount - swapCount == row * col)
    {
        cout << eraseCount - swapCount << endl;
        return true;
    }

    return false;
}

int main(void)
{
    int number;
    int count = 1;
    int i, j, k, l;

    //auto start = chrono::system_clock::now();


    cin >> col >> row >> number;

    vector< vector<char> > block(row, vector<char>(col));
    vector< vector<char> > copyBlock;
    vector< vector<int> > map(row, vector<int>(col));
    vector<blockMap>  eraseInfo;
    vector<blockMap> copyInfo;

    int blockAllNum;
    int max;
    int maxSize;
    int minSize;
    int blockMax;


    for(k = 0; k < number; ++k)
    {
        vector< vector<blockMap> > blockInfo(row*col);
        if(k == 0)
        {
            for(i = 0; i < row; ++i)
            {
                for(j = 0; j < col; ++j)
                {
                    cin >> block[i][j];
                    map[i][j] = 0;
                }
            }
        }else
        {
            if(blockErase(block, map, 0))
            {
                break;
            }
        }
        
        count = 1;
        for(i = 0; i < row; ++i)
        {
            for(j = 0; j < col; ++j)
            {
                if(map[i][j] == 0 && block[i][j] != ' ')
                {
                    blockMapping(i, j, block, map, blockInfo[count-1], count);
                    count++;
                }   
            }
        }

        blockAllNum = count - 1;
        max = 0;
        blockMax = 0;

        minSize = __INT_MAX__;
        maxSize = 0;
        
        //vector< vector<int> > copyMap(row, vector<int>(col));


        for(i = 0; i < blockAllNum; ++i)
        {

            if(blockInfo[i].size() > max)
            {
                max = blockInfo[i].size();
                blockMax = i;
            }
            if(k == number-1 || blockAllNum > 500)
            {
                continue;
            }
            

            count = 1;
            copyBlock = block;

            for(l = 0; l < blockInfo[i].size(); ++l)
            {
                blockMap blockErase = blockInfo[i][l];
                copyBlock[blockErase.i][blockErase.j] = ' ';
                //cout << blockErase.i << blockErase.j << endl;
            }

            if(blockErase(copyBlock, map, 0))
            {
                blockMax = i;
                break;
            }
            
            for(l = 0; l < row; ++l)
            {
                for(j = 0; j < col; ++j)
                {
                    if(map[l][j] == 0 && copyBlock[l][j] != ' ')
                    {
                        blockMapping(l, j, copyBlock, map, copyInfo, count);
                        count++;
                    }   
                }
            }

            if((count - 1) < minSize)
            {
                blockMax = i;
                minSize = count - 1;
                maxSize = blockInfo[i].size();
            }
            //vector<blockMap>().swap(copyInfo);

        }

        for(i = 0; i < blockInfo[blockMax].size(); ++i)
        {
            blockMap blockErase = blockInfo[blockMax][i];
            block[blockErase.i][blockErase.j] = ' ';

        }
        blockMap blockErase = blockInfo[blockMax][0];
        eraseInfo.push_back(blockErase);
        /*
        cout  << endl;
        for(i = 0; i < row; ++i)
        {
            for(j = 0; j < col; ++j)
            {
                cout << map[i][j] <<  " ";
            }
            cout << endl;
        }

        cout << endl;
        for(i = 0; i < row; ++i)
        {
            for(j = 0; j < col; ++j)
            {
                cout << block[i][j] <<  " ";
            }
            cout << endl;
        }
        */
    }
/*
    auto end = std::chrono::system_clock::now();       // 計測終了時刻を保存
    auto dur = end - start;        // 要した時間を計算
    auto msec = std::chrono::duration_cast<std::chrono::milliseconds>(dur).count();
    // 要した時間をミリ秒（1/1000秒）に変換して表示
    std::cout << msec << " milli sec \n";
 */

    cout << k << endl;
    for(i = 0; i < k; ++i)
    {
        cout << eraseInfo[i].j+1 << " " << eraseInfo[i].i+1 << endl;
    }
/*
    int erase = 0;
    for(i = 0; i < row; ++i)
    {
        for(j = 0; j < col; ++j)
        {
            if(block[i][j] == ' ')
            {
                erase++;
            }
            cout << block[i][j];
        }
        cout << endl;
    }
    cout << erase << endl;*/
    return 0;
}
