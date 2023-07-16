 /*Declare structures for the following,
1. Time: seconds, minutes, hours
2. Date: day, month, year
3. city: name, state, country
4. Address: name, house-number, street, city
  Name : EMIL SAJ ABRAHAM
  Class : A.I.
  Roll no : 28
*/
#include <stdio.h>
#include <conio.h>
struct time
{ 
    int minutes;
    int seconds;
    int hours;
};
struct Date
{
    char day[10];
    char month[10];
    int year;
};
struct city
{
    char cityname[20];
    char state[20];
    char country[20];
};