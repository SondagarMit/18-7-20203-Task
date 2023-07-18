#include<stdio.h>
#include<conio.h>
void main()
{
 int x,y,z,ans;
 clrscr();
 printf("Enter a Value =");
 scanf("%d%d",&x,&y);
 ans=((x*x*x)+(3*x*x*y)+(3*x*y*y)+(y*y*y)+(3*x*x*z)+(6*x*y*z)+(3*y*y*z)+(3*x*z*z)+(3*y*z*z)+(z*z*z));

 printf("%d",ans);


 getch();

}