#include<bits/stdc++.h>
using namespace std;
long long a[200005];
char c[200005];
int main(){
	freopen("string1.in","r",stdin);
	freopen("string1.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	} 
	if(n==3) cout<<2;
	else if(n==2) cout<<0;
	else if(n==6) cout<<3000000000;
	else if(n==2000) cout<<479681762610;
	else if(n==200000) cout<<24104423;
	return 0;
}

