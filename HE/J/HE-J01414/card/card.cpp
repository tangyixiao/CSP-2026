#include <bits/stdc++.h>
const int N=5e5+10;
using namespace std;
int n,m;
int a[N];
int b[N];
int cnt[N];
void solve(int k){
	stack<int>q;
	for(int i=k;i<=n;i++){
		if(b[a[i]]){
			while(!q.empty()){
				int kk=q.top();
				b[kk]--;
				q.pop();
				if(kk==a[i])break;
			}
			q.push(a[i]);
			b[a[i]]++;
		}
		else{
			q.push(a[i]);
			b[a[i]]++;
		}
	}
	for(int i=1;i<=m;i++){
		if(b[i])cnt[i]++;
	}
	for(int i=1;i<=m;i++)b[i]=0;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++)cin >> a[i];
	for(int i=1;i<=n;i++)solve(i);
	for(int i=1;i<=m;i++)cout << cnt[i] << ' ';
	return 0;
}
