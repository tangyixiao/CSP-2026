#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=5e5+10;
int a[N],ans[N],sum[N];
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	stack<int> st;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(ans[a[j]]!=0){
				while(st.top()!=a[j]){
					ans[st.top()]--;
					st.pop();
				}
			}else{
				st.push(a[j]);
				ans[a[j]]++;
			}
		}
		while(!st.empty()){
			sum[st.top()]++;
			ans[st.top()]--;
			st.pop();
		}
	}
	for(int i=1;i<=m;i++) cout<<sum[i]<<" ";
	
	return 0;
}
