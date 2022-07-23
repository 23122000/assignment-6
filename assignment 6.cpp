#include<stdio.h>
int main()
{
    int x , i,sum=0;
     printf("\n enter a number ");
        scanf("%d",&x);
for(i=1;i<=x;i++)
    {
    sum=sum+i;
    }
    printf("sum of first %d natural numbers is %d ",x,sum);
    printf("\n");
    int u , y,w=0;
     printf("\n enter a number ");
        scanf("%d",&u);
for(y=2;y<=2*u;y=y+2)
    {
    w=w+y;
    }
    printf("sum of first %d  even natural numbers is %d ",u,w);
    printf("\n");
    int p ,q,r=0;
     printf("\n enter a number ");
        scanf("%d",&p);
for(q=1;q<=2*p-1;q=q+2)
    {
    r=r+q;
    }
    printf("sum of first %d  odd natural numbers is %d ",p,r);
    printf("\n");
int a,b,d=0,c;
     printf("\n enter a number ");
        scanf("%d",&a);
for(b=1;b<=a;b++)
    {
    c=b*b;
    d=d+c;
    }
    printf("sum of squares of  first %d natural numbers is %d ",a,d);
    printf("\n");
    int e,f,g=0,h;
     printf("\n enter a number ");
        scanf("%d",&e);
for(f=1;f<=e;f++)
    {
    h=f*f*f;
    g=g+h;
    }
    printf("sum of cubes of  first %d natural numbers is %d ",e,g);
    printf("\n");
     int j,k,l=1;
    printf("enter the value of number ");
    scanf("%d",&j);
    for(k=1;k<=j;k++)
    {
        l=l*k;

    }
    printf("factorial of %d is %d ",j,l);
    printf("\n");
     int z,count=0;
    printf("enter the number ");
    scanf("%d",&z);
    while(z!=0)
    {
        z=z/10;
        count++;
    }
    printf(" the number of digits is %d ", count);
    printf("\n");
      int o, m, flag ;
     printf("enter a number ");
     scanf("%d",&o);
     if( o== 0 || o==1)
    flag=1;
     for(m=2;m<=o/2;m++)
     {
         if(o%m == 0)
         {
             flag =1;
             break;
         }
     }
     if(flag==1)
     {
         printf(" not prime");
     }
     else
     {
        printf(" prime");
     }
     printf("\n");
          int v,t,s;
     printf("enter two numbers");
     scanf("%d,%d",&v,&t);
     for(s=1;s<=v*t;s++)
     {
         if((s%v==0) && (s%t==0))
         {
             break;
         }
     }
     printf("lcm of numbers is %d ", s);

     printf("\n");
     int n  , remainder , reverse ;
      printf("enter a number ");
      scanf("%d",&n );
      while(n!=0)
      {
          remainder= n%10;
          n= n / 10;

          reverse =  reverse*10 + remainder;
      }
      printf(" the reverse of the given number is %d" ,  reverse);

printf("\n");
}
