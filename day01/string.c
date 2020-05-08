/*
 * @Description: 
 * @Version: 
 * @Author: liu
 * @Date: 2020-05-03 17:50:48
 */
#include <stdio.h>

int main(){

    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char greeting1[6] = {'W', 'o', 'r', 'l', 'd','!', '\0'};
    printf("Greeting message: %s\n", greeting);

    char str1[12] = "Hello";
    char str2[12] = "World";
    char str3[12];
    int len;

    strcpy(str3, str1);
    printf("strcpy(str3, str1) : %s\n", str3);

    strcat(str1, str2);
    printf("strcat(str1, str2): %s\n", str1);

    len = strlen(str1);
    printf("strlen(str1): %d\n", len);

    return 0;

}