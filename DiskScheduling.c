#include <stdio.h>
void main ()
{
	int a[20],n,i,t=0;
	printf("Enter head pointer position:");
	scanf("%d",&a[20]);
	printf("Enter number of processes:");
	scanf("%d",&n);
	printf("Enter the processes in request order\n");
	for (i=0;i<n;i++)
		scanf ("%d",&a[i]);
	for (i=0;i<n;i++)
	{
		if (a[i]<a[i+1])
			t+=(a[i+1]-a[i]);
		else
			t+=(a[i]-a[i+1]);
	}
	printf("\nProcessing Order:");
	for (i=0;i<=n;i++)
	{
		printf("\t%d",a[i] );
	}
	printf("Total Head movement:%d",t);
}