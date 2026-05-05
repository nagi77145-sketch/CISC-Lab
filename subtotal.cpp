#include <iostream>
#include <cstdio>
using namespace std;

int main(){

    int current_key = 0;
    int subtotal = 0;
    int total = 0;
    int n, key, value;
    cin >> n;
    cin >> current_key >> value;
    subtotal = value;
    total = value;

    for(int i = 2 ; i <= n; i++){
        cin >> key >> value;
        if(key == current_key){
            subtotal += value;
            total += value;
        }
        else {
            printf("Subtotal for %4d: %6d\n", current_key, subtotal);
            subtotal = value;
            current_key = key;
            total += value;
        }

    }
    printf("Subtotal for %4d: %6d\n", current_key, subtotal);
    printf("----------------------\n");
    printf("Grand total: %6d\n", total);

    return 0;

}