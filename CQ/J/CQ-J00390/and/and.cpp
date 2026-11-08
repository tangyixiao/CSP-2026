#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5;
int n,m,a,f1,start,ans;
bool f[N][35];
queue<int>q;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a;
		q.push(i);
		int idx=0;
		while(a){
			if(a%2==1){
				f[i][idx]=1;	
			}
			idx++;
			a>>=1;
		}
	}
	for(int i=32;i>=0;i--){
		f1=0;
		start=0;
		while(q.front()!=start){
			if(start==0)start=q.front();
			f1+=f[q.front()][i];
			q.push(q.front());
			q.pop();
		}
		start=0;
		if(f1>=m){
			ans+=(1<<i);
			while(q.front()!=start){
				if(f[q.front()][i]==1){
					if(start==0)start=q.front();
					q.push(q.front());
				}
				q.pop();
			}
		}
	}
	cout<<ans;
	return 0;
}

