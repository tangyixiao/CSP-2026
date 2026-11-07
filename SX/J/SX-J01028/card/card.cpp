#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[500005],ans[300005],in[300005],cnt,c[500005],t[500005];
stack<int>st;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(n<=5000&&m<=3000){
		for(int i=1;i<=n;i++){
			for(int i=1;i<=m;i++) in[i]=0;
			while(!st.empty()) st.pop();
			for(int j=i;j<=n;j++){
				if(in[a[j]]) while(st.top()!=a[j]) in[st.top()]--,st.pop();
				else in[a[j]]++,st.push(a[j]);
			}
			for(int j=1;j<=m;j++) if(in[j]) ans[j]++;
		}
		for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
		return 0;
	}
	else if(m==2){
		for(int i=1;i<=n;i++){
			if(a[i]==a[n]) ans[a[i]]++;
			else ans[1]++,ans[2]++;
		}
		cout<<ans[1]<<' '<<ans[2]<<'\n';
		return 0;
	}
	bool flag=1;
	for(int i=1;i<n;i++) flag&=(a[i+1]>=a[i]);
	if(flag){
		for(int i=1;i<=n;i++) if(a[i]!=a[i+1]) ans[a[i]]=i;
		for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
		return 0;
	}
	int lst=0;
	for(int i=1;i<=n;i++) if(a[i+1]!=a[i]) c[++cnt]=a[i],t[cnt]=i-lst,lst=i;
	for(int i=1;i<=cnt;i++){
		for(int i=1;i<=m;i++) in[i]=0;
		while(!st.empty()) st.pop();
		for(int j=i;j<=cnt;j++){
			if(in[c[j]]) while(st.top()!=c[j]) in[st.top()]--,st.pop();
			else in[c[j]]++,st.push(c[j]);
		}
		for(int j=1;j<=m;j++) if(in[j]) ans[j]+=t[i];
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	return 0;
}
/*10 4
4 4 1 2 4 2 1 4 4 3*/