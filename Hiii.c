#include<stdio.h>
int main()
int a=10 b=13;
{
  printf(" The values of a and b before swapping is %d and %d",a,b);
  a=a+b; //a+b=23 (10+13)
  b=a-b; //a-b=10(23-13, as a takes the value 23)
  a=a-b; //a-b=13(23-10, as b takes the value 10)
  printf("the values of a and b after swapping is %d and %d",a,b);
  return 0;
}
