//12345
//23455
//34555
//45555
//55555

#include<stdio.h>
void main(){
    for(int i=0;i<5;i++){
       for(int j=i+1;j<=5;j++){
            printf("%d", j);
       } 
       for(int k=0;k<i;k++){
            printf("5");
       }
       printf("\n");
    }
}
