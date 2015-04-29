#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i, j, N, *v, temp;
	
	//Create N random integers
	srand(time(0));
	N = 11;
	v = (int *) malloc( N * sizeof(int));
	for(i=0;i<N;++i)
	{
		v[i] = rand() % 100;
		printf("%d,",v[i]);
	}
	printf("\n");
	
	//Bubble Sort
	//compare v[i] and v[j]
	//Bubble Sort的每個迴圈都會保證放一個最大的到後面
	//因此只要作(n+1)/2次迴圈就行 
	for(j=0;j<(N+1)/2;++j)
	{
	for (i=0;i<N-j;++i)
	{
		if(v[i]>v[i+1])
		{
			temp = v[i];
			v[i] = v[i+1];
			v[i+1] = temp;
			
		}
	}
	for(i=0;i<N;++i)
	{
		printf("%d,",v[i]);
	}
	printf("\n");
	}
	printf("中位數= %d",v[(N-1)/2]);
	return 0;
}
