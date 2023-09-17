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

int main(){
    int n,i,k,sum=0,x;
    scanf("%d%d",&n,&k);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    for(i=0;i<n;i++){
        if(i != k){
            sum=a[i]+sum;
        }
    }
    if(sum/2 == x){
        printf("Bon Appetit");
    }
    else {
    printf("%d",x-(sum/2));
    }
    return 0;
}  
    
