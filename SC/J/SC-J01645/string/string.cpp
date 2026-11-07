#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+10;
string s,c,c1;
ll n,a[N],cnt,b[N],mx=-1e9;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		b[c[i]-'a']+=a[i];
		mx=max(mx,b[c[i]-'a']);
		cnt+=a[i];
	}
	cout<<cnt-mx;
	return 0;
}