#include<bits/stdc++.h>
using namespace std;
int N=2e5;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,sum;
	long long a[N];
	char b[N];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	for(int i=1;i<=n;i++){
		if(b[i]==b[i+1])
		sum++;
	}
	if(sum==n){
		cout<<"0";
	}
	else
	cout<<n-1;
	return 0;
}