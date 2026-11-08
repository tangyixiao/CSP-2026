#include<bits/stdc++.h>
using namespace std;
const int N=2*1e5+5;
int n,m;
int a[N],len[N];
int Max_len=0;
bool vis[N];
int ans=0,cnt=0;
vector<int> b;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		for(int j=1;j<=30;j++){
			if(a[i]<(1<<j)){
				len[i]=j;
				Max_len=max(Max_len,len[i]);
				break;
			}
		}
	}
	for(int i=Max_len-1;i>=0;i--){
		cnt=0;
		b.clear();
		for(int j=1;j<=n;j++){
			if(vis[j]==1) continue;
			if(((a[j]>>i)&1)==1){
				cnt++;
			}else{
				b.push_back(j);
			}
		}
		if(cnt>=m){
			ans+=(1<<i);
			for(int j=0;j<b.size();j++) vis[b[j]]=1;
		}
	}
	cout<<ans;
	return 0;
}
