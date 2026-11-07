#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
long long int sum[100001];
int a,b;
int i1,i2;
long long int max1=0;
int anss=1,ans,num;

void work(){
	int indexx;
	for(int p=1;p<=a;p++){
		if(sum[p]!=0)
		{
			if(max1<ans&sum[p]){
				indexx=p;
				max1=ans&sum[p];
			}
		}
	}
	anss*=max1;
	max1=1;
	sum[indexx]=0;
}

int main(){
	for(int i=1;i<=8;i++){
		ans*=2;
	}
	ans--;
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>a>>b;
	for(int i=1;i<=a;i++)
	{
		cin>>sum[i];
	}
	if(b==1){
		long long int maxx=1;
		for(int j=1;j<=a;j++){
			maxx=max(maxx,sum[j]);
		}
		cout<<maxx;
		return 0;
	}
	//for(int i=1;i<=a;i++)
	//{
	//	int c=ans&sum[i];
	//	cout<<c;
	//}
	anss=0;
	for(int i=1;i<=a;i++)
	{
		for(int j=i+1;i<=a;j++){
			int n=sum[i]&sum[j];
			if(anss<n)
			{
				i1=i;
				i2=j;
				anss=n;
			}
		}
	}
	sum[i1]=0;
	sum[i2]=0;
	for(int j=2;j<=b;j++)
	{
		work();
	}
	
	
	
	cout<<anss;
	return 0;
} 
