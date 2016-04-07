#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#include<vector>
#include <stdlib.h>
#define N 10000
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
{
int* Array=NULL;
 Array=new int[N];
 for(int i=0;i<N;i++)
 Array[i]=0;

	string t;
	
	int size=0;
	while(1)
	{
		cin>>t;
		if(t=="x")
		break;
		
			Array[size++]=atoi(t.c_str());
		
		
		
	}
	
	/*for(int i=0;i<Array.size();i++)
	 cout<<Array[i];
	 cout<<endl;
	 cout<<Array.size();*/
		//cin>>Array[i];
		cout<<size<<endl;
		
		cout<<MaxSubArray(Array,size);
	
	return 0;
}
