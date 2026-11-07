#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
long long n,ar[N],k;
long long L,ans;
char a;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>k>>a;
		int u=a-'a'+1;
		ar[L+1]+=u;
		ar[L+k+1]-=u;
		L+=k;
	}
	for(int i=1;i<=L;++i){
		ar[i]=ar[i-1]+ar[i];
	}
	for(int i=1;i<=L/2;++i){
		if(ar[i]!=ar[L+1-i]) ans++;
	}
	cout<<ans<<endl;
	return 0;
}