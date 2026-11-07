#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10;
int n,m;
int a[N],ans[N];
bool flag[N];
queue<int> q;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(!flag[j]){
				q.push(a[j]);
				flag[a[j]]=true;
			}
			if(flag[a[j]]){
				while(!q.empty()){
					flag[q.front()]=false;
					q.pop();
				}
				q.push(a[j]);
				flag[a[j]]=true;
			}
		}
		while(!q.empty()){
			ans[q.front()]++;
			flag[q.front()]=false;
			q.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}
