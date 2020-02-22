#include<stdio.h>

int x = 0;
int y = 0;
char ch = 'z';

int add(int a, int b);

int main(void)
{

   
   //fprintf(stderr, "..... Calculator ..... \n");
   printf("..... Calculator ..... \n");

   while(ch!= 'x')
   {    
	   printf("Enter the first no." );
	   scanf("%d", &x);
	   printf("Enter the second no." );
	   scanf("%d", &y);

	   add(x,y);
	   //sub(x,y);
	   //mul(x,y);
	   //div(x,y);
   }



}

int add(int a, int b)
{
    
	int res = 0; 
        res = a + b; 
	printf("The sum is: %d\n",res);

}
