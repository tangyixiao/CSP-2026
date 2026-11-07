#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int n,m,a[N],ex[N],ans[N],cnt;
stack<int> s; 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++)
			ex[j]=0;
		cnt=0;
		for(int j=i;j<=n;j++)
			if(!ex[a[j]]) ex[a[j]]=1,s.push(a[j]);
			else {
				while(s.top()!=a[j])
					ex[s.top()]=0,s.pop();
			}
//		for(int j=1;j<=m;j++)
//			cout<<ex[j]<<' ';
		for(int j=1;j<=m;j++)
			if(ex[j])
				ans[j]++;
	}
	for(int i=1;i<=m;i++)	cout<<ans[i]<<' ';
}
