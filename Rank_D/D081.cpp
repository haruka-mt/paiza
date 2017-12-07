#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    int n, h, w;

    cin >> n >> h >> w;

    int sum = w * h;
    printf("%d\n", sum%n);
    return 0;
}