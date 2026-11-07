#include<bits/stdc++.h>
using namespace std;
const int N=5*1e5+5;
int a[N],num[N],ll[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	stack<int> s;
	for(int i=1;i<=n;i++){
		memset(ll,0,sizeof ll);
		for(int j=i;j<=n;j++){
			if(ll[a[j]]==0){
				ll[a[j]]=j;
			}else{
				int x=0;
				while(x!=a[j]){
					x=s.top();
					ll[x]=0;
					s.pop();
				}
				ll[a[j]]=j;
			}
			s.push(a[j]);
		}
		while(s.size()){
			int x=s.top();
			num[x]++;
			s.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<num[i]<<" ";
	}
}