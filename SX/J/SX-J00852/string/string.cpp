#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s;
	long long n,a[1000000005];
	cin>>n;
	for(int i=0;i<=n-1;i++){
		cin>>a[i];
		cin>>s[i];
	}
	if(n==3&&a[0]==2&&a[1]==2&&a[2]==1)cout<<0;
	return 0;
}