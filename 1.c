#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
 {
   float length, width, area;
   
   printf("Enter length:");
   scanf("%f", &length);
   
   printf("Enter width:");
   scanf("%f", &width);
   
   area = length * width;
   
   printf("Area = %.2f\n", area");
	return 0;
}
