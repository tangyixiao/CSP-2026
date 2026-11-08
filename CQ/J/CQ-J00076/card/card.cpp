#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N=1e6+5;
int n,m,f[N],cnt[N],a[N];
stack<int>s;

signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(!f[a[j]]){
				f[a[j]]=1;
				s.push(a[j]);
			}else{
				while(!s.empty()&&s.top()!=a[j]){
					f[s.top()]=0;
					s.pop();
				}
				s.pop();
				s.push(a[j]);
			}
		}
		for(int j=1;j<=m;j++){
			if(f[j]==1){
				cnt[j]++;
				f[j]=0;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}

	return 0;
}
