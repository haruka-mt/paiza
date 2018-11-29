#include <iostream>
using namespace std;
int main(void){
    int n, limit;
    cin >> n >> limit;
    
    for(int i = 1; i <= n; ++i) {
        int score, minus;
        cin >> score >> minus;
        score = max(score - minus * 5, 0);
        if (score >= limit) {
            cout << i << endl;
        }
    }
    return 0;
}
