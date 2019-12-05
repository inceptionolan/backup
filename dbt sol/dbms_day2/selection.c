#include<stdio.h>

int main()
{
	int arr[]={4,7,2,2,1};
	int s,k;
//	for(k=0;k<5;k++)
 // printf("%d\n",arr);
//
// 		for (k = 0; k < 5; k++)
  //  printf( "%d\n", arr[k]) ;

int i=0,j=0,min,count=0;
	for(i=0;i<4;i++)
	{	
		min=i;
		for(j=i+1;j<5;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			int temp; 
			temp=arr[min];
			arr[min]=arr[i];
			arr[i]=temp;
		}
	}
	for(s=0;s<5;s++)
	printf("%d ,",arr[s]);
	printf("\n\n");
	//k=0;

	//i=0;
	//j=0;
	
//   for(i=0;i<4;i++)
  // {
		// count=1;
     //for(j=i+1;j<5;j++)
      //{
       // if(arr[i]<arr[j])
       /// {
					//count++;
			//	}	
		//	}
		///	printf("%d\nCount : ",count
for(i=0;i<5; )
	{
		count=1;
		for(j=i+1;j<5;j++)
		{
		if(arr[i]==arr[j])
		{
			count++;
		}
		else
		{
			break;
		}
	}
	printf("element=%d \n count=%d",arr[i],count);
	i=j;
	}
	return 0;
}
