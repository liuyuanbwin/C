/*
 * @Description: 
 * @Version: 
 * @Author: liu
 * @Date: 2020-05-03 17:07:30
 */
#include <stdio.h>
#include <stdlib.h>

void populate_array(int *array, size_t arraySize,int (*getNextValue)(void))
{
    for (size_t i = 0; i < arraySize; i ++)
        array[i] = getNextValue();
}

void getNextRandomValue(void)
{
    return rand();
}

int addTwoNumber(int x, int y)
{
    return x + y;
}

int postiveTwoNumber(int x, int y)
{
    return x - y;
}

int operateTwoNumber(int x, int y,int (* operateMethod)(int a, int b)){
    return operateMethod(x, y);
}

int main(){
    int myarray[10];
    populate_array(myarray, 10, getNextRandomValue);
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d ", myarray[i]);
    }
    printf("\n");

    int result = operateTwoNumber(44, 55, addTwoNumber);
    printf("result = %d\n", result);

    result = operateTwoNumber(44, 55, postiveTwoNumber);
    printf("result = %d\n", result);

    return 0;
}