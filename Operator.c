#include <stdio.h>
int main()
{
int a, b, res;
char op;
scanf("%d%c%d", &a, &op, &b);

if(op == '+')
res=a+b;
else if(op == '-')
res=a-b;
else if(op == '*')
res=a*b;
else if(op == '/')
res=a/b;
else
{
printf("\n wrong operator");
printf("%d", res);
}
return 0;
}
