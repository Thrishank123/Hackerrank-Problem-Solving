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

int main()
{
    int i,p,d,likes=0,s=5;
    scanf("%d",&d);
    for(i=0;i<d;i++){
        likes=likes+floor(s/2);
        s=floor(s/2)*3;
    }
    printf("%d",likes);
    return 0;
}