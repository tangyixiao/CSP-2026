#include<bits/stdc++.h>
using namespace std;
long long a[100000001];
char hwcc[10000010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long hwcn;
	string hwc="",hwc1="";
	cin>>hwcn;
	for(long long i=1;i<=hwcn;i++){
		cin>>a[i]>>hwcc[i];
	}
	int bj=0;
	for(long long i=1;i<=hwcn-1;i++){
		if(a[i]!=a[i+1]) bj=1;
	}
	long long ppp=1;
	if(bj==0){
		ppp=a[1];
		for(long long i=1;i<=hwcn;i++) a[i]=1;
	}
	for(long long i=1;i<=hwcn;i++){
		for(long long j=1;j<=a[i];j++){
			hwc+=hwcc[i];
		}
	}
	for(long long i=hwc.size()-1;i>=0;i--){
		hwc1+=hwc[i];
	}
	if(hwc==hwc1) cout<<0;
	else{
		long long sum=0;
		for(long long i=0;i<hwc.size();i++){
			if(hwc[i]!=hwc1[i]){
				sum++;
			}
		}
		cout<<sum*ppp/2;
	}
	return 0;
}
/*
3
2 a
2 b
1 c
a2b2c1
c1b2a2
2
2 a
3 a
a2a3
a3a2
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
axbxcxdxexbx
bxexdxcxbxax
*/ 