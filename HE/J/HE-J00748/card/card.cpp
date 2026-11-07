#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500010];
int ans[300010];
bool  b[300010];
int main(){
	stack<int> t;
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i = 1;i<=n;i++)cin>>a[i];
	for(int i = 1;i<=n;i++){
		for(int j = i;j<=n;j++){
			if(b[a[j]]==0){
				t.push(a[j]);
				b[a[j]] = 1;
			}else{
				while(t.top()!=a[j]){
					b[t.top()] = 0;
					t.pop();
				}
				b[t.top()] = 1;
			}
		}
		while(!t.empty()){
			ans[t.top()]++;
			t.pop();
		}
		fill(b,b+m+1,0);
	}
	for(int i = 1;i<=m;i++)cout<<ans[i]<<' ';
	fclose(stdin);
	fclose(stdout);
	return 0;
}
