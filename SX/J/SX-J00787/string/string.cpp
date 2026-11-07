#include <bits/stdc++.h>
using namespace std;
int n,m=0,b=0;
int s[3000010];
char a[3000010];
int main() {
	freopen("string.in","r",stdin);freopen("string.out","w",stdout);
	cin>>n;for(int i=1;i<=n;i++){cin>>s[i]>>a[i];m+=s[i];if(a[i]==a[i-1]) b++;}
	if(b==n-1) cout<<"0";
	else cout<<m/2;
	return 0;
}
