#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("getcdemo.txt","r");
    // fgetc demo for reading a file
    // char c = fgetc(ptr);
    printf("The value of my character is %c \n",fgetc(ptr));
    printf("The value of my character is %c \n",fgetc(ptr));
    printf("The value of my character is %c \n",fgetc(ptr));
    printf("The value of my character is %c \n",fgetc(ptr));
    printf("The value of my character is %c \n",fgetc(ptr));
    printf("The value of my character is %c \n",fgetc(ptr));

    return 0;
}