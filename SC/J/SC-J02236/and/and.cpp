#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN=2e5+10;
ll n,m,a[MAXN],ans;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	queue<int> q;
	queue<int> q2;
	cin>>n>>m;
	int cnt=n,nowans=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if((a[i]>>30)&1)nowans++;
		q.push(a[i]);
	}
	
	for(int i=30;i>=0;i--){
		int f=0;
		if(nowans>=m){
			f=1;
			ans+=(1ll<<i);
		}nowans=0;
		while(!q.empty()){
			int p=q.front();
			q.pop();
			if(((p>>i)&1)==0&&f){
				cnt--;
				continue;
			}
			if((p>>(i-1))&1)nowans++;
			q2.push(p); 
		}
		while(!q2.empty()){
			q.push(q2.front());
			q2.pop();
		}
		if(cnt<m)break;
	}
	cout<<ans;
	return 0;
}

