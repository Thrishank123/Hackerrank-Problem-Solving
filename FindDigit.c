#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void divisor() {
    unsigned long long int x;
    scanf("%llu", &x);
    unsigned long long int temp = x;
    int count = 0;
    while (temp > 0) {
        int digit = temp % 10;
        if (digit != 0 && x % digit == 0) {
            count++;
        }
        temp /= 10;
    }
    printf("%d\n", count);
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        divisor();
    }
    return 0;
}