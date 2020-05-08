/*
 * @Description: standard input output 
 * @Version: 1.0
 * @Author: liu
 * @Date: 2020-05-08 15:42:36
 */

#include <stdio.h>
#include <stdlib.h>
int main(){
    float f;
    printf("请输入一个小数:");
    scanf("%f", &f);
    printf("输入的小数是: %f", f);
    system("pause");
    return 0;
}
