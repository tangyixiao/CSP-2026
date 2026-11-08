#include<bits/stdc++.h>
using namespace std;
#define int long long
namespace Quirrel{
//tmp
int xx;
pair<int,char>x,y;
//input
int n,m,op[200100];
char c[200100];
//solve
stack<pair<int,char> >st1,st2;
//output
int ans;
signed main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>op[i]>>c[i];m+=op[i];
	}
	m/=2;xx=m;
	for(int i=1;i<=n;i++){
		if(xx>op[i]){
			xx-=op[i];
			st1.push({op[i],c[i]});
		}
		else{
			st1.push({xx,c[i]});break;
		}
	}
	xx=m;
	for(int i=n;i>=1;i--){
		if(xx>op[i]){
			xx-=op[i];
			st2.push({op[i],c[i]});
		}
		else{
			st2.push({xx,c[i]});break;
		}
	}
	while(st1.size()&&st2.size()){
		x=st1.top();y=st2.top();
		st1.pop();st2.pop();
		if(x.second!=y.second){
			ans+=min(x.first,y.first);
		}
		if(x.first==y.first)continue;
		if(x.first<y.first){
			y.first-=x.first;
			st2.push(y);
		}
		else{
			x.first-=y.first;
			st1.push(x);
		}
	}
	cout<<ans;
	return 0;
}
//
}
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	Quirrel::main();
    return 0;
}
/*
还是直接模拟即可

We are all in the gutter,but some of us are looking at the stars. 
*/
