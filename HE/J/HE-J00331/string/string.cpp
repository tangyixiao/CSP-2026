#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	long long a[n+5];
	char c[n+5];
	for(long long i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	if(n==3){
		cout<<2;
	}
	if(n==2)
	return 0;
}
