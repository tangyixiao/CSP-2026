#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[500001],ans[300001],sum[300001];
bool f[300001],fl[300001];
stack<int> s;
signed main(){
 	ios::sync_with_stdio(0);
 	cin.tie(0);
 	freopen("card.in","r",stdin);
 	freopen("card.out","w",stdout);
 	cin>>n>>m;
 	bool kkk=1;
 	for(int i=1;i<=n;i++){
 		cin>>a[i];
 		sum[a[i]]++;
 		if(a[i]<a[i-1]) kkk=0;
	}
	if(kkk==1){
		for(int i=1;i<=m;i++) sum[i]+=sum[i-1],cout<<sum[i]<<" ";
	}
	else{
	 	for(int i=1;i<=n;i++){
	 		for(int j=i;j<=n;j++){
	 			if(f[a[j]]) while(s.top()!=a[j]) f[s.top()]=0,s.pop();
	 			else s.push(a[j]),f[a[j]]=1;
			}
			while(!s.empty()){
				ans[s.top()]++;
				f[s.top()]=0;
				s.pop();
			}
		}
		for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	}
 	return 0;
}
