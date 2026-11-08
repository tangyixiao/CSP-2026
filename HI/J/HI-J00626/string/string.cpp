#include<bits/stdc++.h>
using namespace std;
const long long N=2*1e9+10;
char a[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long cnt1=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		long long n1;
		char a1;
		cin>>n1>>a1;
		for(int i=cnt1;i<=cnt1+n1;i++)a[i]=a1;
		cnt1+=n1;
	}
	long long cnt=0;
	for(int i=0;i<cnt1/2;i++){
		if(a[i]!=a[cnt1-i-1])cnt++;
	}
	cout<<cnt;
	return 0;
}

