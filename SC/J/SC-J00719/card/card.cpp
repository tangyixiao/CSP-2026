#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[500005],cnt[300005],siz,mx[300005];
stack<int> st;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		while(!st.empty())st.pop();
		siz=0;
		memset(cnt,0,sizeof(cnt));
		for(int j=i;j<=n;j++){
			if(cnt[a[j]]){
				while(!st.empty()&&a[st.top()]!=a[j]){
					cnt[a[st.top()]]=0;
					st.pop();
					siz--;
				}
			}else{
				siz++;
				cnt[a[j]]=1;
				st.push(j);
			}
		}
		for(int i=1;i<=m;i++){
			if(cnt[i])mx[i]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<mx[i]<<' ';
	}
	return 0;
}