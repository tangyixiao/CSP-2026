#include<bits/stdc++.h>
using namespace std;
int n,m,b[500005],c[300005],v[500005],cnt,u;//b记顺序，c记多少次,v记第几个是什么 
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	vector<int> a;
	int aa[500000];
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		a.push_back(x);
	}
	int x=m;
	while(m--){
		for(int i=1;i<=n-cnt;i++){
			int y=a[0];
			a.pop_back();
			if(b[y]==0){
				cnt++;
				b[y]=cnt;
				v[cnt]=y;
			}else{
				for(int i=b[y]+1;i<=cnt;i++){
					a.push_back(v[i]);
					v[i]=0; 
					b[v[i]]=0;
				}
				cnt-=b[y]-1;
			}
		}
		for(int i=1;i<=cnt;i++){
			c[v[i]]++;
			if(c[v[i]]==1) aa[u++]=v[i];
		}
	}
	for(int i=1;i<=u;i++){
		cout<<c[aa[i]]<<' ';
	}
	return 0;
} 
