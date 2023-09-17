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
void warn(int n,int m, int s){
    int rem =m %n;
    int start =s-1;
    int w=(start+rem)%n;
    if (w==0){
        printf("%d\n",n);
    }
    else {
    printf("%d\n",w);
    }
}
int main(){
   int t,i,n,m,s;
   scanf("%d",&t);
   for(i=0;i<t;i++){
       scanf("%d%d%d",&n,&m,&s);
       warn(n,m,s);
}
}
