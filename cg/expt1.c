#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
void main()
{
float x,y,x1,y1,x2,y2,dx,dy,e;
int i,gd,gm;
clrscr();

/* Read two end points of line
---------------------------------- */
printf("Enter the value of x1 :\t");
scanf("%f",&x1);
printf("Enter the value of y1 :\t");
scanf("%f",&y1);
printf("Enter the value of x2 :\t");
scanf("%f",&x2);
printf("Enter the value of y2 :\t");
scanf("%f",&y2);
/* Initialise graphics mode
---------------------------------- */
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\tc\\BGI");

dx=abs(x2-x1);
dy=abs(y2-y1);

/* Initialise starting point

-----------------------------*/
x = x1;
y = y1;
putpixel (x, y, 15) ;

/* Initialise decision variable
-------------------------------- */
e = 2 * dy-dx;

i = 1; /* Initialise loop counter */
do
{
while(e >= 0)
{
y = y + 1;
e = e - 2 * dx;
}
x = x + 1;
e = e + 2 * dy;
i = i + 1;
putpixel (x, y, 15);
}
while( i <= dx);
getch();
closegraph();
}