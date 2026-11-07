#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,sum=0,total=0;
	string front,back,all,end_front;
	long long x;char y;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x>>y;
		sum+=x;
		for(int j=0;j<x;j++){
			all+=y;
		}
	}
	for(int i=0;i<sum/2;i++){
		front[i]=all[i];
	}
	for(int i=sum/2;i<sum;i++){
		back[i-sum/2]=all[i];
	}
	for(int i=0;i<sum/2;i++){
		for(int j=sum/2-1;j>=0;j--){
			end_front[i]=front[j];
		}
	}
	for(int i=0;i<sum/2;i++){
		if(end_front[i]!=back[i])	total++;
	}
	cout<<total;
	return 0;
}