 /* two input each representing 
 the distances between two points in the  Euclidean space,
  store these in structure variables and add the two   distance values.
  Name : EMIL SAJ ABRAHAM
  Class : A.I.
  Roll no : 28
*/
#include <stdio.h>
#include<conio.h>
struct Point
{
int x;
int y;
}p1,p2,p3;
int main()
{
  printf("Enter the first point(x1,y1)\n"); 
  scanf("%d,%d",&p1.x,&p1.y);
  printf("Enter the second point(x2,y2)\n"); 
  scanf("%d,%d",&p2.x,&p2.y);
  p3.x=p1.x+p2.x;
  p3.y=p1.y+p2.y;
  printf("new point after addition\n");
  printf("(%d,%d)\n",p3.x,p3.y);
  return 0;
} 