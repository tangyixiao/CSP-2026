#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=5e5+5,M=3e5+5;
int n,m;
int a[N],b[N];
int ans[M];
int vis[M]={0};
bool f=true;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	stack<int > st;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	sort(b+1,b+n+1);
	for(int i=2;i<=n;i++){
		if(b[i]!=b[i-1]) {
			f=false;
			break;
		}
	}
	if(f==true){
		for(int i=1;i<=n;i++){
			cout<<i<<" ";
		}
		return 0;
	}
	for(int i=1;i<=m;i++) ans[i]=0;
	int cnt=1;
	while(cnt<=n){
		for(int i=cnt;i<=n;i++){
			if(vis[a[i]]!=0){
				st.push(a[i]);
				for(int j=vis[a[i]];j<i;j++){
					vis[st.top()]=0;
					st.pop();
				}
				vis[a[i]]=i;
			}else{
				st.push(a[i]);
				vis[a[i]]=i;
			}
		}
		while(!st.empty()){
			ans[st.top()]++;
			st.pop();
		}
		cnt++;
		for(int i=1;i<=m;i++) vis[i]=0;
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0; 
} 
