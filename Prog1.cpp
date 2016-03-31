#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;
int MaxSubArray(int A[],int size)
{
	int max_end=A[0];
	int max_now=A[0];
	for(int i=1;i<size;i++)
	{
		max_end=max(A[i],max_end+A[i]);
		max_now=max(max_end,max_now);
	}
	
	return max_now;
}

int main()
{int* Array=NULL;
 int n=0;

	int hold=0;
		cin>>n;
		Array=new int[n];
		for(int i=0;i<n;i++)
		cin>>Array[i];
		hold=MaxSubArray(Array,n);
		cout<<hold;
	
	
}
