#include <stdlib.h>
#include <stdio.h>

#define MAX 3

int main(){
    int i, j;

    int matriz[MAX][MAX] = {
        {1, 2, 3}, 
        {4, 5, 6}, 
        {7, 8, 9}
    };

    for(i=0;i<MAX; i++){
        for(j=0;j<MAX;j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}