#include<bits/stdc++.h>
#define int long long
#define pii pair<int,int>
using namespace std;
int n,m,a[500005];
stack<int>q;
map<int,bool>p;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
    scanf("%lld %lld",&n,&m);
    vector<map<int,bool>>v(n+5);
    for(int i=1;i<=n;i++) scanf("%lld",a+i);
    for(int i=1;i<=n;i++){
    	for(int j=i;j<=n;j++){
    		if(!p[a[j]]){
    			p[a[j]]=1;
    			q.push(a[j]);
			}
			else{
				while(q.top()!=a[j]){
					p[q.top()]=0;q.pop();
				}
			}
		}
		while(q.size()){
			v[i][q.top()]=1;q.pop();
		}
		p.clear();
	}
	for(int i=1;i<=m;i++){
		int sum=0;
		for(auto j:v){
			if(j[i]) sum++;
		}
		printf("%lld ",sum);
	}
	return 0;
}

