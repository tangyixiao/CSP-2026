#include<bits/stdc++.h>
using namespace std;
int main(){
freopen("string.in","r",stdin);
freopen("string.out","w",stdout);
	long long n,a1,cnt=0,num=0;
	char a2,aaa;
	string sum[100000],dud[100000];
	cin>>n;
	for(long long i=0;i<n;i++){
		cin>>a1>>a2;
		if(aaa==a2 and i+1==n){
			cout<<0;
			return 0;
		}
		aaa=a2;
		for(long long j=0;j<a1;j++){
			sum[cnt++]=a2;
		}
	}
	for(long long i=0;i<cnt;i++){
		if(dud[i]!=sum[cnt]){
			num++;
		}
		cnt--;
	}
	cout<<num;
	return 0;
}
