#include <stdio.h>
#include <math.h>
int main()
{
    int i=10,s,b=100,x;
    
    printf("x=");
    scanf("%d",&x);
 if(x>10 && x<100)
{
    for(s=1; i<=b; i++)
{
    if (i%2==0 && i>=x) 
    s += i;
}
printf("s=%d",s);}
else{
  printf("x не співпадає з значеними числами задайте інше x");
  return 0;
}
}
