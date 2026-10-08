#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
 {
   int  mark;
   
   printf("Enter the mark:");
   scanf("%d", &mark);
   
    if(mark >= 80 &&mark <=100)
   printf("Grade A");
   
   else if(mark >= 70)
   printf("Grade B");
   
   else if(mark >= 60)
   printf("Grade C");
   
   else if(mark >= 50)
   printf("Grade D");
   else if(mark >= 0)
   printf("Grade F");
   else
   printf("invalid mark");
   
	return 0;
}
