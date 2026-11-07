#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n;
unsigned long long ans;
struct node{
	long long a;
	char c;
}g[N];
long long minn;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>g[i].a>>g[i].c;
	}int l=1,r=n;
	while(l<r){
		
		if(g[l].a<g[r].a) minn=g[l].a;
		else minn=g[r].a;
		if(g[l].c!=g[r].c) ans+=minn;
		g[l].a-=minn,g[r].a-=minn;
		if(g[l].a==0) l++;
		if(g[r].a==0) r--;
	}cout<<ans;
	
	
	
	return 0;
}