#include <stdio.h>
#include <string.h>

void reverseString(char str[],int start,int end){
    if (start >= end) return;
    char temp = str[start];
    str[start]=str[end];
    str[end]=temp;

    reverseString(str,start + 1,end - 1);
}

int main(){
    char str[]="David is handsome";
    int length = strlen(str);

    printf("original string: %s\n",str);
    reverseString(str,0,length-1);
    printf("new string: %s\n",str);

    return 0;
}

