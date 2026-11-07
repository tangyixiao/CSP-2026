#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxn=5e5+5;
int n,m;
int pos[maxn];
int a[maxn];int cnt[maxn];
int v[maxn];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	int fg=0;
	if(n>5000&&m<=3000){
		fg=1;
		int tim=0;
		for(int i=1;i<=n;i++){
			int x;cin>>x;
			if(i==1||a[tim]!=x){
				a[++tim]=x;
				v[tim]=1;
			}else v[tim]++;
		}
	}
	else for(int i=1;i<=n;i++)cin>>a[i];
	for(int start=1;start<=n;start++){
		stack<int>st;
		for(int i=start;i<=n;i++){
			if(!pos[a[i]]){
				pos[a[i]]=i;
				st.push(a[i]);
			}
			else{
				while(!st.empty()&&st.top()!=a[i]){
					pos[st.top()]=0;
					st.pop();
				}pos[a[i]]=i;
			}
		}
		for(int i=1;i<=m;i++)pos[i]=0;
		while(!st.empty()){
		//	cout<<st.top()<<' ';
			if(fg)cnt[st.top()]+=v[start];
			else cnt[st.top()]++;
			st.pop();
		}//cout<<endl;
	}for(int i=1;i<=m;i++)cout<<cnt[i]<<' ';
	cout<<endl;
	return 0;
}
