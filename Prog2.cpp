#include<iostream>
#include<algorithm>
#include<string>
#include<stdlib.h>
#define N 10000

using namespace std;
 int Cross_maxi(int* Array,int lenght,int start,int middle,int end)
 {
 	int Lmax=Array[middle],Lsum=0;
 	int Rmax=Array[middle+1],Rsum=0;
 	for(int i=middle;i>start;i--)
 	{
 		Lsum+=Array[i];
 		Lmax=max(Lmax,Lsum);
 		
	 }
	 
	 for(int i=middle+1;i<end;i++)
	 {
	 	Rsum+=Array[i];
	 	Rmax=max(Rmax,Rsum);
	 	
	 }
	 return max(max(Lmax,Rmax),Lmax+Rmax);
 }
 
 int ComputeMax(int* Array, int lenght, int start, int end)
 {
 	int maxi=0;
 	int sum=0;
 	for(int i=start;i<end;i++)
 	{
 		sum+=Array[i];
 		maxi=max(maxi,sum);
	 }
	 return maxi;
 }
 
 int Getmax(int* Array,int lenght,int start,int end)
 {
 	
 	if(start==end)
 	return Array[start];
 	int middle=(start+end)/2;
 	int leftMax=ComputeMax(Array,lenght,start,middle);
 	int RightMax=ComputeMax(Array,lenght,middle,end);
 	int cross =Cross_maxi(Array,lenght,start,middle,end);
 	
 	return max(max(leftMax,RightMax),cross);
 	
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
	cout<<Getmax(Array,size,0,size-1);
 	
 return 0;	
 }
