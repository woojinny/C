#include <stdio.h>

int main(void)
{
 int    a, b, res;
 char   k;

 printf("type number : ");
 scanf("%d%c%d, &a, &k, &b");

 switch(k)
 {
	 case '+':
     res = a + b;
     break;
     
     case '-':
     res = a - b;
     break;

     case '*':
     res = a * b;
     break;

     case '/':
     res = a / b;
     break;
     
     default:
     printf("require four arithmetic operations");
     break;
 }  

 printf("%d%c%d = %d\n, a, k, b, res");
}
