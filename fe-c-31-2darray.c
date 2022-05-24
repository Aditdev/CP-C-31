// Sum of elements of2 arrays 
#include <stdio.h>

int main(){
    int arr[3][3],arr2[3][3],j,i;
    printf("Enter a Number array");
    for(i=0;i<3;i++){
        for (j=0;j<3;j++)
        scanf("%d",&arr[i][j]);
    }
    printf("\nEnter another Number array");
    for(i=0;i<3;i++){
        for (j=0;j<3;j++)
        scanf("%d",&arr2[i][j]);
    }
    printf("The Sum of both the Matries is");
    for(i=0;i<3;i++){
        printf("\n");
        for (j=0; j<3 ; j++ ) 
        printf("%3d" , arr[i][j] + arr2[i][j] );
    }
    return 0;
    
}
