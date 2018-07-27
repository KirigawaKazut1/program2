// C program to rotate an array by
// d elements
#include <stdio.h>

/* Function to left Rotate arr[] of size n by 1*/
void leftRotatebyOne(int arr[], int n);

/*Function to left rotate arr[] of size n by d*/
void leftRotate(int arr[], int d, int n)
{
  int i;
  for (i = 0; i < d; i++)
    leftRotatebyOne(arr, n);
}

void leftRotatebyOne(int arr[], int n)
{
  int temp = arr[0], i;
  for (i = 0; i < n-1; i++)
     arr[i] = arr[i+1];
  arr[i] = temp;
}

/* utility function to print an array */
void printArray(int arr[], int n)
{
  int i;
  for (i = 0; i < n; i++)
    printf("%d ", arr[i]);
}

/* Driver program to test above functions */
int main()
{int a,b,c,i;
   int *arr=NULL;
   loo:
   printf("Enter the number of test cases\n");
   scanf("%d",&b);
   if((b>=1)&&(b<=100))
   {
    loop:
   printf("Enter the number of elements in the array\n");
   scanf("%d",&a);
   if((a>=1)&&(a<=1000))
   {
    arr = (int*)malloc(a * sizeof(int));
    for (i = 0; i < a; i++)
    {
        printf("Enter the elements\n");
        scanf("%d",&arr[i]);
    }
    loopo:
   printf("Enter the number of places to shift\n");
   scanf("%d",&c);
   if((c>=1)&&(c<=1000))
   {
   leftRotate(arr, c, a);
   printArray(arr, a);
   getchar();
   return 0;
   }
   else
   {
       goto loopo;
   }
   }
   else
   {
       goto loop;
   }
   }
   else
   {
       goto loo;
   }
}
