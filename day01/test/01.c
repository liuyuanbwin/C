/*
 * @Description: 
 * @Version: 
 * @Author: liu
 * @Date: 2020-05-06 13:09:31
 */
#include <stdio.h>



int result(int a, int b, int(*opt)(int x,int y)){
    return opt(a, b);
}

int add(int a,int b){
    return a + b;
}


int main(){

    int year = result(6, 7, add);
    printf("result = %d", year);
    return 0;
    
}