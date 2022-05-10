#include <stdio.h>
using namespace std;

//gcc --fno-stack-protector --z execstack --mpreferred-stack-boundary=4 --o bufferoverflow bufferoverflow.c

//gcc -fno-stack-protector --mpreferred-stack-boundary=4 -o Main Main.cpp
//https://github.com/muhammet-mucahit/Security-Exercises

//https://www.amongbytes.com/post/201201-how-find-c++-object-address-of-a-class-in-the-core-file/

//chamaFunc address: 00401460

int chamaFunc(){
    printf("ChamaFunc");
}

int main(){
    //int num[416] = {}; //ja inicia num com 1000 zeros automaticamente
    char array[400];
    gets(array);
    printf("\n");
    printf(array);
    return 0;
} 