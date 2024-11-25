#include <stdio.h>
void main() 
{
 int buf[10], bufsize, in, out, pro, con, ch = 0;
 in = 0;
 out = 0;
 bufsize = 10;
 while (ch!= 3) {
 printf("\n1. Produce \t 2. Consume \t 3. Exit");
 printf("\nEnter your choice: ");
 scanf("%d", &ch);
 switch (ch) 
{
 case 1:
 if ((in + 1) % bufsize == out)
 printf("\nBuffer is Full");
 else 
 {
 printf("\nEnter the value: ");
 scanf("%d", &pro);
 buf[in] = pro;
 in = (in + 1) % bufsize;
 }
 break;
 case 2:
 if (in == out)
 printf("\nBuffer is Empty");
 else {
 con = buf[out];
 printf("\nThe consumed value is %d", con);
 out = (out + 1) % bufsize;
 }
 break;
case 3:printf("Exit the Program select correct option");
 break;
 
 default:
 printf("\nInvalid choice. Please enter 1, 2, or 3.");
 }
 }
}
