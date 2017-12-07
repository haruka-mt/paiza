#include <cstdio>

using namespace std;

int main(void)
{
    int N, M;
    scanf("%d %d", &N, &M);

    if (N+M < 16)
    {
        printf("HIT\n");
    }
    else
    {
        printf("STAND\n");
    }
    return 0;
}