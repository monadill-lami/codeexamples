#include <stdio.h>

int main(){
    int days, left_days, years, months, weeks;
    scanf("%d", &days);
    years = days/365;
    months = (days-(years*365))/30;
    weeks = (days-(years*365)-(months*30))/7;
    left_days = days - (years*365) - (months*30) - (weeks*7);

    printf("Years = %d Months = %d Weeks = %d Days = %d", years, months, weeks, left_days);
}