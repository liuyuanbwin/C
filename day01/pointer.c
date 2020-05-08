/*
 * @Description: 
 * @Version: 
 * @Author: liu
 * @Date: 2020-05-03 16:47:23
 */
#include <stdio.h>

int main(){
    int var1;
    char var2[10];

    var1 = 10;

    printf("var1 变量的地址: %p\n", &var1);
    printf("var2 变量的地址: %p\n", &var2);

    int *ip = NULL;
    ip = &var1;
    printf("var1 变量的值: %d\n", *ip);

    int *ptr = &var2;

    printf(ptr ? ("地址是:%p", ptr) : "是空指针");

    return 0;
}
