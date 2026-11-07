#include<bits/stdc++.h>
#define edl putchar('\n')
using namespace std;
const int MAXN = (5e5+5);
const int MAXM = (3e5+5);
int n,m,a[MAXN],ans[MAXM],lst[MAXM],s[MAXM],to[MAXM],p,k,r[MAXM];
void topo(){
	int u;
	queue < int > Q;
	for(int i = 1;i <= m;i++){
		if((!r[i])){
			Q.push(i);
		}
	} 
	while((!Q.empty())){
		u = Q.front();
		Q.pop();
		ans[u] += s[u];
		if(to[u] > 0){
			r[to[u]]--;
			ans[to[u]] += ans[u];
			if((!r[to[u]])){
				Q.push(to[u]);
			}
		}
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i = 1;i <= n;i++){
		cin>>a[i];
		s[a[i]]++;
		lst[a[i]] = i;
	}
	for(int i = 1;i < n;i++){
		k = a[i];
		p = lst[k];
		while((p < n) && (!to[k])){
			to[k] = a[(p+1)]; 
			r[a[(p+1)]]++;
			k = a[(p+1)];
			p = lst[k]; 
		}
	}
	topo();
	for(int i = 1;i <= m;i++){
		cout<<ans[i]<<" ";
	}
	edl;
	return 0;
}
