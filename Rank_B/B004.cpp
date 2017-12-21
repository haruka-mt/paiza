#include <iostream>
#include <cstdio>
#include <sstream>

using namespace std;

int main(void)
{
    string buf, address[4];
    int num;

    int i = 0;
    getline(cin, buf);
    stringstream ssTmp{buf};
    while (getline(ssTmp, buf, '.'))
    {
        address[i] = buf;
        int tmp;
        if(i < 2)
        {
            tmp = stoi(address[i]);
        }     
        if (i < 3 && (tmp < 0 || tmp > 255))
        {
            return 0;
        }
        i++;
        if (i > 4)
        {
            break;
        }
    }

    scanf("%d", &num);
    cin.ignore();
    cin.ignore();

    for (i = 0; i < num; ++i)
    {
        getline(cin, buf);
        stringstream ss{buf};
        int line = 0;
        bool flag = false;
        int octet = 0;
        while (getline(ss, buf, ' '))
        {
            if (line == 0)
            {
                stringstream ss2{buf};
                string ipNum;
                while (getline(ss2, ipNum, '.'))
                {
                    if (address[octet][0] != '[' && address[octet][0] != '*')
                    {
                        if (ipNum == address[octet])
                        {
                            flag = true;
                        }
                        else
                        {
                            flag = false;
                            break;
                        }
                    }
                    else
                    {
                        int min, max;
                        if (address[octet][0] == '[')
                        {
                            string tmp = address[octet].substr(1);
                            tmp.erase(tmp.length() - 1);

                            int index = tmp.find('-');
                            min = stoi(tmp.substr(0, index));
                            max = stoi(tmp.substr(index + 1, tmp.length() - (int)index));
                        }
                        else
                        {
                            min = 0;
                            max = 255;
                        }
                        if (stoi(ipNum) >= min && stoi(ipNum) <= max)
                        {
                            flag = true;
                        }
                        else
                        {
                            flag = false;
                            break;
                        }
                    }
                    octet++;
                }
                if (flag == true)
                {
                    cout << buf;
                }
            }
            if (line == 3 && flag == true)
            {
                cout << " " << buf.substr(1);
            }
            if (line == 6 && flag == true)
            {
                cout << " " << buf;
            }
            line++;
        }
        if (flag == true)
        {
            cout << endl;
        }
    }

    return 0;
}