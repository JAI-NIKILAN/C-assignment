#include<stdio.h>
int main()
{
	int temp,i,j,n,a[5]={40,80,30,20,5};

	n=sizeof a/sizeof a[0];
	
	printf("before sorting..\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");

	for(i=0;i<n-1;i++)  //(n-1) because of a[j+1] in last with will count garbage
	{
		for(j=0;j<n-i-1;j++) // for using i because this is bubble sort value will move to last and settled so it will remains.In another iteration can't disturb
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("after sorting..\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}


