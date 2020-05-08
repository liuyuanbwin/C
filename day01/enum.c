/*
 * @Description: 
 * @Version: 
 * @Author: liu
 * @Date: 2020-05-03 16:31:26
 */
#include <stdio.h>

enum DAY
{
    MON = 1,
    TUE,
    WED,
    THU,
    FRI,
    SAT,
    SUN
};

enum
{
    SPRING,
    SUMMER,
    AUTUMN,
    WINTER
} season;

int main(){

    enum DAY day;
    day = SUN;
    season = AUTUMN;
    printf("Today is %d,season is %d", day, season);
    return 0;

}