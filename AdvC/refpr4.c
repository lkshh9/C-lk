#include<stdio.h>
void sumAndAvg(int a,int b,int *sum ,float *avg){
    *sum = a + b;
    *avg = (float)*sum/2;
}

int main(){
    int i, j, sum;
    float avg;
    i=4;
    j=5;
    sumAndAvg(i,j,&sum,&avg);
    printf("The value of sum is %d \n",sum);
    printf("The value of avg is %f",avg);
    
    return 0;
}