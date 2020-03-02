# include <stdio.h>

int main()
   {

    int year,i;

    printf("Enter your year: ");
    scanf("%i", &year);
    for(i=1; i >=4; ++i)
    {
    switch(year)
    {
        case 'i=1':
            printf("BAIUST 1yr");
            break;

        case 'i=2':
            printf("BAIUST 2yr");
            break;

        case 'i=3':
            printf("BAIUST 3yr");
            break;

        case 'i=4':
            printf("BAIUST 4yr");
             printf("\n OOPS.... I am a GRADTUATE \n BAIUST Goodbye \nStart seeking Job");
            break;
    }

    }

    return 0;
}
