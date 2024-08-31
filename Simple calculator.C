
#include<stdio.h>?
void main()
{
  int n1,n2;
  float res;
  int ch;
  printf("enter the two number n1 and n2");
  scanf("%d%d",&n1,&n2);

  printf("enter 1 for addition\n");
  printf("enter 2 for subtraction\n");
  printf("enter 3 for multiplication\n");
  printf("enter 4 for division\n");

  printf("enter 5 for exit");
  printf("enter the choice");
  scanf("%d",&ch);
  switch(ch)
    {
    case 1: res=n1+n2;
            printf("%f",res);
            break;
    case 2: res=n1-n2;
            printf("%f",res);
            break;
    case 3: res=n1*n2;
           printf("%f",res);
           break;
    case 4: res=n1/n2;
           printf("%f",res);
           break;

  default:printf("invalid input");
    }


}



  
