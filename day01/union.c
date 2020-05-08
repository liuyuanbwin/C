/*
 * @Description: union  
 * @Version: 
 * @Author: liu
 * @Date: 2020-05-08 15:17:41
 */

#include <stdio.h>
union Data{
    int i;
    float f;
    char str[20];
} data;
int main(){
    union Data data;
    printf("Memory size occupied by data:%d\n", sizeof(data));
    return 0;
}
