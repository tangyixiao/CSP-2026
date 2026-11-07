#include <bits/stdc++.h>
using namespace std;
int a[500005],cnt[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	bool f=0;
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		if(a[i]<a[i-1]) f=1;
	}
	if(f==0){
		for(int i=1;i<=n;i++){
			if(a[i]!=a[i+1]) cout << i << " ";
		}
		return 0;
	}
	for(int i=1;i<=n;i++){
		stack<int> st;
		bool b[300005]={0};
		for(int j=i;j<=n;j++){
			if(b[a[j]]==0){
				st.push(a[j]);
			}
			else{
				while(st.top()!=a[j]){
					b[st.top()]=0;
					st.pop();
				}
			}
			b[a[j]]++;
		}
		while(!st.empty()){
			cnt[st.top()]++;
			st.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout << cnt[i] << " ";
	}
	return 0;
}
