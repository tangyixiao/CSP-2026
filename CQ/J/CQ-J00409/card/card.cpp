#include<bits/stdc++.h>
using namespace std;
int n,m,a[5050],l,b[5050];
int c[5050],num;
stack<int>q;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		memset(c,0,sizeof(c));
		num=-1;
		for(int j=i;j<=n;j++){
			if(c[a[j]]!=0){	
				num=-1;
				while(!q.empty()&&num!=a[j]){
					num=q.top();
					q.pop();
					c[num]=0;
				}
			}
			q.push(a[j]);
			c[a[j]]=1;
		}
		while(!q.empty()){
			b[q.top()]++;
			q.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<' ';
	}
	return 0;
}
