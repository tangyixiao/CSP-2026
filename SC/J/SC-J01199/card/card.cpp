#include<bits/stdc++.h>
using namespace std;
int n,m,a[500010],f[500010],ans[500010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	for(int i = 1;i <= n;i++){
		memset(f,0,sizeof(f));
		stack<int>st;
		for(int j = i;j <= n;j++){
			if(f[a[j]]){
				while(st.top() != a[j]){
					f[st.top()]= 0;
					ans[st.top()]--;
					st.pop();
//					cout<<1;
				}
				st.pop();
				ans[a[j]]--;
			}
			st.push(a[j]);
			f[a[j]] = 1;
			ans[a[j]]++;
//			cout<<2;
		}
//		cout<<3;
	}
	for(int i = 1;i <= m;i++){
		cout<<ans[i]<<' ';
//		cout<<4;
	}
	return 0;
} 

/*
10 3
3 1 2 1 3 2 3 1 2 1
*/ 