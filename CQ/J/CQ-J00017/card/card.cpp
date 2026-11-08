#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[500005],as[500005],vis[500005];
stack<int>st;
//10 3
//3 1 2 1 3 2 3 1 2 1
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
//	cout<<1;
	for(int i=1;i<=n;i++)cin>>a[i];
	if(n*n*n<=10000000){
		for(int mm=1;mm<=n;mm++){
			while(!st.empty())st.pop();
			for(int i=1;i<=n;i++)vis[i]=0;
			st.push(a[mm]);
			vis[a[mm]]=1;
			for(int i=mm+1;i<=n;i++){
				if(vis[a[i]]==1){
//					cout<<i<<' '<<a[i]<<endl;;
					while(st.top()!=a[i]){
						int xx=st.top();
						vis[xx]=0;
						st.pop();
					}
//					cout<<st.size()<<endl;
					st.pop();
				}else vis[a[i]]=1;
				st.push(a[i]);
			}
//			cout<<1;
			for(int i=1;i<=m;i++)as[i]+=vis[i];
//			cout<<endl;
		}
		for(int i=1;i<=m;i++)cout<<as[i]<<' ';
	}else{
		
	}
//	cout<<1;
	return 0;
}
