#include<stdio.h>

int main(){
    FILE *ptr;
    char c;
    ptr = fopen("getcdemo.txt","r");
    c = fgetc(ptr);
    while(c!=EOF){
        printf("%c",c);
        c = fgetc(ptr); // reading character from the file
    }
    return 0;
}