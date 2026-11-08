#include<bits/stdc++.h>
using namespace std;
const int MAXN=5e5+5;
int n,m,a[MAXN],s[MAXN];
queue<int>q1,q2;
int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			int x=q2.front();
			while(x!=a[j]&&!q2.empty()){
				q2.pop();
				q1.push(x);
				x=q2.front();
			}
			while(!q2.empty()){
				q2.pop();
			}
			while(!q1.empty()){
				int k=q1.front();
				q1.pop();
				q2.push(k);
			}
			q2.push(a[j]);
		}
		while(!q2.empty()){
			int k=q2.front();
			q2.pop();
			s[k]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<s[i]<<" ";
	}
	return 0;
}

