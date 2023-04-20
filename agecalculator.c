#include<stdio.h>
#include<conio.h>
int main(){

int  currentYear,currentMonth,currentDay;
int year, month, day;
int ageday,agemonth,ageyear;


printf("enter your birth year\n ");
scanf("%d",&year);

printf("enter your birth month\n ");
scanf("%d",&month);

printf("enter your birth day\n ");
scanf("%d",&day);

printf("enter current year\n ");
scanf("%d",&currentYear);

printf("enter current month \n ");
scanf("%d",&currentMonth);

printf("enter current day\n");
scanf("%d",&currentDay);
 // for calculating day
    if(currentDay!=0){
        if(day>currentDay){
            currentDay=currentDay+30;
            ageday= currentDay-day;
            currentMonth--;
            }
            else{
                ageday=currentDay-day;
            }
    } else{
        printf("Invalid");
    }


 // for calculating month
    
    if(currentMonth!=0){
        if(month>currentMonth){
            currentMonth=currentMonth+12;
            agemonth= currentMonth-month;
            currentYear--;
            }
            else{
                agemonth=currentMonth-month;
            }
    } else{
        printf("Invalid");
    }
        // for calculating year
        ageyear= currentYear-year;


        printf("your current age is \n");
        printf("%dyear%dmonth%ddays",ageyear,agemonth,ageday);

    return 0;
}