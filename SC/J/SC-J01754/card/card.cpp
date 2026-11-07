#include <bits/stdc++.h>
using namespace std;
const int MAXN=505,MAXM=205;
int a[MAXN],ans[MAXM];
bool v[MAXM];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n<=500){
		stack<int>stk;
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j++){
				if(v[a[j]]==1){
					while(1){
						if(!stk.empty()){
							stk.pop();
							if(stk.top()==a[j]){
								stk.pop();
								break;
							}
						}
					}
				}
				v[a[j]]=1;
				stk.push(a[j]);
			}
			while(stk.size()){
				ans[stk.top()]++;
				stk.pop();
			}
			for(int i=1;i<=m;i++){
				v[i]=0;
			}
		}
		for(int i=1;i<=m;i++){
			cout<<ans[i]<<" ";
		}
	}else{
		for(int i=1;i<=n;i++){
			int pre=0;
			for(int j=i;j<=n;j++){
				if(a[j]>pre){
					ans[pre]++;
					pre=a[j];
				}
			}
			ans[pre]++;
		}
		for(int j=1;j<=m;j++){
			cout<<ans[j]<<" ";
		}
	}
	return 0;
} 