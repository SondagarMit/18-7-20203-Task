//marksheet making c language
#include<stdio.h>
#include<conio.h>
void main()
{
 int s,s1,s2,s3,s4,s5,total;
 float avg;
 clrscr();
 printf("enter to 6 subject marks =");
 scanf("%d%d%d%d%d%d",&s,&s1,&s2,&s3,&s4,&s5);
 total=s+s1+s2+s3+s4+s5;
 avg=total/6;
 printf("total is =%d\n",total);
 printf("avg is =%f",avg);



 getch();




}
