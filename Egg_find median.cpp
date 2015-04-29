#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#include <iostream>      原本想讓使用者自由輸入數列個數 
//using namespace std;     可是生出的數列會在最後面跑出0 求教授解答 

int main()
{
	int i, j, N, *v, temp;
	
	//Create N random integers
	srand(time(0));
	//cout << "請輸入數列個數(奇數) : ";     時間不夠，防奧客機製有機會再研究 ,而且重點是尾巴跑出0還沒解決 
	//cin >> N;      						  應該是if N=even cout << "請不要當奧客 乖乖打奇數" 這樣 
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
	return 1;
}
