#include <stdio.h>
#include <string.h>
#include <time.h>

void main()
{
    int InputYear, InputMonth, InputDay, InputHour, InputMinute;
    int FlightTime, leapyear = 0, flag = 1;
    int year = 0, month, day, hour, minute;
    printf("Please enter year/month/day hour:minute: \n");
    scanf("%d/%d/%d %d:%d", &InputYear, &InputMonth, &InputDay, &InputHour, &InputMinute);
    printf("%d/%d/%d %d:%d", InputYear, InputMonth, InputDay, InputHour, InputMinute);
    printf("Please enter your flight time(minute): ");
    scanf("%d", &FlightTime);

    if ((InputYear % 4 == 0 && InputYear % 100 != 0) || (InputYear % 400 == 0 && InputYear % 3200 != 0))
    {
        leapyear = 1;
    }

    minute = InputMinute + FlightTime;
    if (minute >= 60)
    {
        hour += minute / 60;
        minute %= 60;
    }
    hour += InputHour;
    if (hour >= 24)
    {
        day += hour / 24;
        hour %= 24;
    }
    day += InputDay;
    month += InputMonth;
    year += InputYear;

    while (flag != 0)
    {
        if (month == 4 || month == 6 || month == 9 || month == 11)
        {
            if (day > 30)
            {
                day %= 30;
                month++;
                if (day < 31)
                {
                    flag = 0;
                }
            }
        }
        else if (month == 2)
        {
            if (leapyear == 1 && day > 29)
            {
                day %= 29;
                month++;
                if (day < 31)
                {
                    flag = 0;
                }
            }
            else if (leapyear == 0 && day > 28)
            {
                day %= 28;
                month++;
                if (day < 31)
                {
                    flag = 0;
                }
            }
        }
        else if (month == 12)
        {
            if (day > 31)
            {
                day %= 31;
                month = 1;
                year++;
                if (day < 31)
                {
                    flag = 0;
                }
            }
        }
        else
        {
            if (day > 31)
            {
                day %= 31;
                month++;
                if (day < 30)
                {
                    flag = 0;
                }
            }
        }
    }

    printf("%d/%d/%d %d:%d", year, month, day, hour, minute);
}
