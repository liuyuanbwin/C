/*
 * @Description: 
 * @Version: 
 * @Author: liu
 * @Date: 2020-05-03 17:03:02
 */
#include <stdio.h>

int max(int x, int y){
    return x > y ? x : y;
}

int main(){

    int a, b, c, d;
    int (*p)(int x, int y) = &max;

    printf("请输入三个数字:");
    scanf("%d %d %d", &a, &b, &c);

    d = p(p(a, b), c);

    printf("最大的数字是: %d\n", d);

    return 0;
}