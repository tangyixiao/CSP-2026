#include <bits/stdc++.h>
using namespace std;
char a[1000000001];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,sum=0,s=0,t=0;
	cin>>n;
	for(int i=0;i<n;i++){
		long long x;char b;
		cin>>x>>b;
		sum+=x;
		for(;s<sum;s++){
			a[s]=b;
		}
	}
	long long ant=0,cnt=sum-1;
	for(long long i=0;i<sum/2;i++){
		if(a[ant]!=a[cnt]){
			t++;
		}
		ant++;
		cnt--;
	}
	cout<<t;
	return 0;
}
