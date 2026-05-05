#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    int total = 0;
    int n = 0;

    while(cin >> a >> b >> c){
        if (a <= 0 || b <= 0 || c <= 0) break;

        int i = n % 3;
        int val;

        if(i == 0) val = a;
        else if(i == 1) val = b;
        else val = c;

        total += val;
        n++;
    }

    printf("%d", total);
    return 0;
}