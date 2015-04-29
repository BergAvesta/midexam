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
	//Bubble Sort���C�Ӱj�鳣�|�O�ҩ�@�ӳ̤j����᭱
	//�]���u�n�@(n+1)/2���j��N�� 
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
	printf("�����= %d",v[(N-1)/2]);
	return 0;
}
