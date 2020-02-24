// Program
//  task: we have date1 and day of date1
//  we have to find day on other date with respective to that case
// input : date1 (dd-mm-yyyy), day of date1, date2
// output : day of date2
//  date format  (dd-mm-yyyy)
//  day for Sun 0, Mon 1, Tue 2, Wed 3, Thus 4, Fri 5, Sat 6

#include<stdio.h>
#include<stdlib.h>


int extraDaysInMonth(int mon, int yrs){
    if(mon==1 || mon==3 || mon==5 || mon==7 || mon==8 || mon==10 || mon==12)
        return 3;
    else if( mon==4 || mon==6 || mon==9 || mon==11 )
        return 2;
    else
    {
        if(yrs%4==0)
            return 1;
        else
            return 0;
        
    }
}

int daysInMonth(int mon, int yrs){
    if(mon==1 || mon==3 || mon==5 || mon==7 || mon==8 || mon==10 || mon==12)
        return 31;
    else if( mon==4 || mon==6 || mon==9 || mon==11 )
        return 30;
    else
    {
        if(yrs%4==0)    // Check for leap year
            return 29;
        else
            return 28;
        
    }
}

int daysBetweenMonth(int mon1, int yrs1, int mon2){
    int days=0;
    mon1++;
    for(; mon1 < mon2; mon1++){
        days += extraDaysInMonth(mon1,yrs1);
    }
    return days;
}

int days(int day){
    switch (day)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednusday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("Sorry Some Error has been occured");
        break;
    }
}
int main(){
    int date1, mon1, yrs1, day1;
    int date2, mon2, yrs2, day2;
    int remainDays1, remainDays2;
    int extraDays=0,daysBetweenMon=0, daysBetweenYrs=0;
    int daysss=0;
    printf("Hello World!");
    printf("Enter the date1 : ");
    scanf("%d %d %d",&date1, &mon1, &yrs1);
    printf("For Days \nMonday : 1\nTuesday : 2\nWednusday : 3\nThursday : 4\nFriday : 5\nSaturday : 6\nSunday : 7\n----------------\n");
    printf("Enter the Day : ");
    scanf("%d",&day1);
    printf("Enter the date2 : ");
    scanf("%d %d %d",&date2, &mon2, &yrs2);

    if(yrs2 > yrs1 ){
        daysBetweenYrs = yrs2-yrs1;
        int yrs = yrs1+1;
        

    //     if( (yrs1%4)==0 && mon1 <= 2)
    //         daysBetweenYrs++;

    // printf("day1 : %d\n", daysBetweenYrs);
    //     if( (yrs2%4)==0 && mon2 > 2)
    //         daysBetweenYrs++;

    // printf("day2 : %d\n", daysBetweenYrs);
    if( mon1 < mon2 ){
        daysss = daysBetweenMonth(mon1,yrs1,12);
        daysss += daysBetweenMonth(1,yrs2,mon1);
    }
    // else if( mon2 < mon1 )
    // {
        
    // }
    
        while (yrs<yrs2)
        {
            if(yrs%4==0)
                daysBetweenYrs++;
            yrs++;
        }
    printf("day BW : %d\n", daysBetweenYrs);
    }
    daysBetweenYrs = (daysBetweenYrs + daysss) %7;
    day1 = (day1 + daysBetweenYrs ) % 7;

    remainDays1 = daysInMonth(mon1, yrs1) - date1;
    remainDays1 = remainDays1 % 7;

    remainDays2 = date2 % 7; 

    extraDays = daysBetweenMonth(mon1, yrs1, mon2) + remainDays1 + remainDays2;

    extraDays = extraDays % 7;

    day2 = (day1 + extraDays) % 7;
    printf("Day : ");
    days(day2);
    return 0;
}