//Andrew LaRoche
//CS333 Homework 2
//A program to calculate the days
//between two dates.
#include <stdio.h>
#include <stdlib.h>

int main (void)
{
int day1, mon1;
int day2, mon2;
int dayInMonth[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int dayDiff;
int i, total;
int temp;
//user prompts and inputs
printf("Please enter the first date seperating numbers by a space\n");
scanf("%d%d", &mon1, &day1);


//Error Checks

//if month 1 is out of bounds then exit.
if (mon1 > 12 || mon1 < 1)
{
printf("Your month 1 input is incorrect \n");
exit(0);
}
//Compares day 1 with the days in month 1 and exits if out of bounds
if (day1 > dayInMonth[mon1] || day1 < 1)
{
printf("Your day1 input is incorrect\n");
exit(0);
}

printf("Please enter the second date seperating numbers by a space\n");
scanf("%d%d", &mon2, &day2);

//if month 2 is out of bounds then exit.
if (mon2 > 12 || mon2 < 1)
{
printf("Your month 2 input is incorrect \n");
exit(0);
}
//if day 2 is out of bounds then exit.
if (day2 > dayInMonth[mon2] || day2 < 1)
{
printf("Your day2 input is incorrect\n");
exit(0);
}


//compares month 1 and 2 and if 2nd precedes 1st, then exit
if (mon1 > mon2)
{
printf("Your second month input is less than your first  month input \n");
exit(0);
}
// if months are the same, compares day 1 and 2 and if 2nd precedes the 1st, then exit
if ( mon1 == mon2 && day1 > day2 )
{
printf("Your second day input is less than your first day input  \n");
exit(0);
}
//End Error Checks


//start arithmetic statements

//if month and days are the same, returns 0
if ( (mon1 == mon2) && (day1 == day2) )
	{

		printf("difference of the dates is 0 \n");
	}
//if months are the same but days are different, finds difference in days
if ( (mon1 == mon2) && (day1 < day2) )
	{
		
		dayDiff = (day2 - day1) -1;

		printf("day is difference is: %d \n", dayDiff);
	}
//if months are different, then calculates the days from first date to second date
if ( (mon1 < mon2) )
	{
		for (i = mon1; i <= mon2; i++)
		{
			temp = i;
			
			if (i == mon1)
			{
				total += (dayInMonth[temp] - day1);
			}
				
			if (i == mon2)
			{
				total += (day2);
			}
			
			if (i != mon1 && i != mon2)
			{
			total += dayInMonth[i];
			}
		
		}
			
			printf("the final total: %d \n", total - 1);
	}





return(0);

} //end program
