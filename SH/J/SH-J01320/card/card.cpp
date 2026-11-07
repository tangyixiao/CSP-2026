#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,cnt;
stack<int> st;
int a[500020],b[300020],ans[300020];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) {
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		cnt=0;
		while(!st.empty()) st.pop();
		for(int j=i;j<=n;j++){
			if(b[a[j]]==0) {
				st.push(a[j]);
				cnt++;
				b[a[j]]=cnt;
			}
			else {
				int t=st.top();
				while(t!=a[j]) {
					b[t]=0;
					cnt--;
					st.pop();
					t=st.top();
				}
			}
		}
		for(int j=1;j<=m;j++) {
			if(b[j]) {
			    ans[j]++;
				b[j]=0;
			}
		}
	}
	for(int i=1;i<=m;i++) {
		cout<<ans[i]<<" ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
