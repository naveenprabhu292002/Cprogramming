
#include<stdio.h>
struct date
{
    int month,day;

};
struct time
{

  int hours,mins;
};
struct date_time
{

    struct date sdate;
    struct time stime;
};
static struct date_time today={{2,21},{2,43}};
void main()
{

    printf("month=%d",today.sdate.month);
    printf("\nday=%d",today.sdate.day);
    printf("\nhours=%d",today.stime.hours);
    printf("\nmins=%d",today.stime.mins);
}
