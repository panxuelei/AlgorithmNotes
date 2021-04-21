/*
有一行电文，已按如下规律译成密码：

A-->Z        a-->z

B-->Y        b-->y

C-->X        c-->x

......          ......

即第一个字母变成第26个字母，第i个字母变成第（26-i+1)个字母，
非字母字符不变。要求根据密码译回原文，并输出。
*/
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str1[100];
    scanf("%s", str1);
    int count=strlen(str1);
    for(int i=0; i<count;i++){
        if(str1[i]>=65 && str[i]<=90){
            str[i]=                
        }
    } 

    return 0;
}