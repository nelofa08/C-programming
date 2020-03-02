#include <stdio.h>
int main()
{
int marks;
printf("\n enter students marks");
scanf("%d", &marks);

if(mark>=80)
{
printf("\n the grade is excellent");
}
else if(mark>=70 && mark<80)
{
printf("\n the grade is very good");
}
else if(mark>=60 && mark<70)
{
printf("\n the grade is good");
}
else if(mark >= 50 && mark<60)
{
printf("\n the grade is average");
}
else(mark<50)
{
printf("\n the grade is fail");
}
return 0;
}
