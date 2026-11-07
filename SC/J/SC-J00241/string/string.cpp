#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
int a[500100];
char ch[200100];
bool vis[200100];
char tp[100000100];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(NULL);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	int len=0,idx=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>ch[i];
		len+=a[i];
		for(int j=1;j<=a[i];j++){
			tp[idx]=ch[i];
			idx++;
		}
	}
	int ans=0;
	for(int i=0;i<idx;i++){
		if(tp[i]!=tp[idx-i-1]&&vis[i]==0&&vis[idx-i-1]==0){
			ans++;
			vis[i]=1;
		}
	}
	cout<<ans;
	return 0;
}