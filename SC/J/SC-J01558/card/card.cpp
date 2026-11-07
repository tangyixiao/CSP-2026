#include<bits/stdc++.h>
#define int long long
#define double long double
#define fs(n) fixed<<setprecision(n)
using namespace std;
const int N=5e5+8,M=3e5+8;
int n,m,a[N],sum[M],ans[M],ansmx[M];
bool tag[M];
vector<int> l[M];
priority_queue<int,vector<int>,less<int> >mx;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		l[a[i]].push_back(i);
		sum[a[i]]++;
	}
	memset(ansmx,0x3f,sizeof(ansmx));
	for(int i=n;i>=1;i--){
		while((!mx.empty())&&mx.top()>=i) mx.pop();
		if(mx.empty()){
			if(ansmx[a[i]]<=i){
				ans[a[i]]+=max(ansmx[a[i]]-1,0ll);
			}else{
				ans[a[i]]+=max(i,0ll);
			}
			if(ansmx[a[i]]>1) ansmx[a[i]]=1;
		}else{
			if(ansmx[a[i]]<=i){
				ans[a[i]]+=max(ansmx[a[i]]-1-mx.top(),0ll);
			}else{
				ans[a[i]]+=max(i-mx.top(),0ll);
			}
			if(ansmx[a[i]]>mx.top()+1) ansmx[a[i]]=mx.top()+1;
		}
		if(tag[a[i]]==false){
			for(int j=0;j<sum[a[i]]-1;j++){
				mx.push(l[a[i]][j]);
			}
			tag[a[i]]=true;
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	return 0;
}