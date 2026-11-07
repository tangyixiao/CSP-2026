#include <bits/stdc++.h>
using namespace std;
const int N=5e5+10;
int a[N],b[N],num[N],c[N],n,m;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		memset(c,0,sizeof(c));
		stack<int>stk;
		for(int j=i;j<=n;j++){
			b[j]=a[j];
		}
		for(int j=i;j<=n;j++){
			if(c[b[j]]==0){
				stk.push(b[j]);
				c[b[j]]++;
				num[b[j]]++;
			}else{
				bool flag=false;
				while(!flag){
					c[stk.top()]--;
					num[stk.top()]--;
					if(stk.top()==b[j]){
						flag=true;
					}
					stk.pop();
				}
				stk.push(b[j]);
				c[b[j]]++;
				num[b[j]]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<num[i]<<" ";
	}
	return 0;
} 
