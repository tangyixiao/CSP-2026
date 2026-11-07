#include<bits/stdc++.h>
using namespace std;
const int MAXN=5e5+5;
const int MAXM=3e5+5;
int n,m;
int a[MAXN];
int ans[MAXM];
int is_st[MAXM];
void f(int x){
	stack<int>st;
	for(int i=1;i<=m;i++){
		is_st[i]=0;
	}
	for(int i=x;i<=n;i++){
		if(is_st[a[i]]){
			while(st.top()!=a[i]){
				is_st[st.top()]--;
				if(is_st[st.top()]==0){
					ans[st.top()]--;
				}
				st.pop();
			}
		}else{
			st.push(a[i]);
			is_st[a[i]]++;
			if(is_st[a[i]]==1){
				ans[a[i]]++;
			}
		}
	}
}
signed main(void){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		f(i);
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}
