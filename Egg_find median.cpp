#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#include <iostream>      �쥻�Q���ϥΪ̦ۥѿ�J�ƦC�Ӽ� 
//using namespace std;     �i�O�ͥX���ƦC�|�b�̫᭱�]�X0 �D�б¸ѵ� 

int main()
{
	int i, j, N, *v, temp;
	
	//Create N random integers
	srand(time(0));
	//cout << "�п�J�ƦC�Ӽ�(�_��) : ";     �ɶ������A�����Ⱦ��s�����|�A��s ,�ӥB���I�O���ڶ]�X0�٨S�ѨM 
	//cin >> N;      						  ���ӬOif N=even cout << "�Ф��n����� �Ĩĥ��_��" �o�� 
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
	return 1;
}
