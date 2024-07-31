#include <stdio.h>

int main()
{
   int arr[3][2]={{2,1},{4,6},{9,7}};
//    int arr[3][1]={{2},{4},{9}};

   int count;
   int sum;
   count=sizeof(arr)/sizeof(arr[0][0]);

   for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
   {
     for(int j=0;j< sizeof(arr[0])/ sizeof(arr[0][0]);j++)
     {
        printf("Indeks ke[%d][%d]=%d\n",i,j,arr[i][j]);
     } 
   }
// printf("arr-1=%ld\n",sizeof(arr[0][0]));
   


}