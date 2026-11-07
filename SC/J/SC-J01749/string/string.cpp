#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxn=2e5+100;
int n,a[maxn];
char ch[maxn],str[10000000];
map<int ,char> mp;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	int k=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>ch[i];
		for(int j=k+1;j<=k+a[i];j++){
			str[j]=ch[i];
		}
		k+=a[i];
	}
	int ans=0;
	for(int i=1;i<=k/2;i++){
		if(str[i]!=str[k-i+1]){
			ans++;
		}
	}
	
//	ans+=b[r][1]-g+k-b[l][2]+1-g;
	cout<<ans;
	
	return 0;
}