#include<bits/stdc++.h>
using namespace std;
int max=0,max1=0;
int digui(int xunhuan,int chang,vector<int> shuju,vector<int>suoyi,int dinzi){
	int i=0;
	if(xunhuan>0){
		for(int suoyi[i]=0;suoyi[i]<chang;suoyi[i]+=1){
			xunhuan-=1;
			if(i!=0){
				suoyi[i]=suoyi[i-1]+1;
			}
			i+=1;
			return digui(xunhuan,chang,shuju,suoyi,dinzi);
		}
	}
	else{
		max1=shuju[suoyi[0]];
		for(int j=1;j<dinzi;j+=1){
			max1=(max1&shuju[j]);
			if(max<max1){
				max=max1;
			}
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	long long max1=0;
	cin>>n>>m;
	long long a[n];
	for(int i=0;i<n;i+=1){
		cin>>a[i];
	}
	int b[n];
	digui(m,n,a,b,m);
	cout<<max;
}