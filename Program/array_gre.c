
#include <stdio.h>

int main(){
  int size, i, f_max, s_max;
    int j=0;
       printf("\nEnter the size of array : ");
       scanf("%d", &size);
        int arr[size];

       printf("Enter elements in the array :\n");
       for(i=0; i < size; i++){
	      scanf("%d",&arr[i]);
	    }

  f_max=0;
  for(i=0; i < size; i++)
  {
      if ( f_max < arr[i])
	  {
         f_max = arr[i];
           j = i;
      }
  }
  printf("\nThe first greatest element is : %d", f_max);

	
   s_max=0;
  for(i=0; i < size; i++)
  {
     if(i == j)
        {
          i++;  
		  i--;
        }
      else
        {
          if(s_max < arr[i])
	     {
               s_max = arr[i];
             }
        }
  }

  printf("\nThe Second greatest element in the array is :  %d", s_max);
  return 0;
}