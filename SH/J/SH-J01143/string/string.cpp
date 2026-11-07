#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e6;
int n,m,ll,cnt;
int a[N];
char c[N];
string b;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int k=1;
	for(int i=1;i<=n;i++){
		ll+=a[i];
		for(int j=1;j<=a[i];j++){
			b[k]=c[i];
			k++;
	}
	}
	for(int i=1,j=ll;i<=ll/2;i++,j--){
		if(b[i]!=b[j]){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
