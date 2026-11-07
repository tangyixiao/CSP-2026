#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,m,a[500005];
stack<int>st;
int vis[500005],vis1[500005];//当前下标上一个的下标(与之链接） 
int t[500005],t1[500005];//最后一次出现的下标
int v[500005];
int d[500005];
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >>n >> m;
	for (int i = 1;i <= n;i++){
		cin >> a[i];
		if(t[a[i]]==0){
			t[a[i]]=i;
		}
		else{
			vis[i]=t[a[i]];
			vis[t[a[i]]]=t[a[i]];
			t[a[i]]=i;
		}
	}
	for(int i = n;i >= 1;i--){
		if(t1[a[i]]==0){
			t1[a[i]]=i;
		}
		else{
			vis1[i]=t1[a[i]];
			vis1[t1[a[i]]]=t1[a[i]];
			t1[a[i]]=i;
		}
	}
	int p=0;
	for(int i = 1;i <= n;i++){
		if(p!=0&&vis[i]==d[i-1]){
			p = 0;
		}
		else if(vis[i]){
			p=max(p,vis[i]);
		}
		
		d[i]=p;
	}
	for(int i = 1;i <= n;i++){
			v[a[i]]=max(i-d[i],v[a[i]]);
	}
	for(int i = 1;i <= m;i++) cout << v[i]<<" ";
	return 0;
}