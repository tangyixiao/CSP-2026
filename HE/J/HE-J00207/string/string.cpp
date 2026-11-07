#include<bits/stdc++.h>
using namespace std;
string s;
long long n,zong=0,sh,ko;
long long c[200057];
char a[200057];
long long id=1,cid,ichang,dchang;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n;
	cid=n;
	for(int i=1;i<=n;i++){
		cin>>c[i]>>a[i];
	}
	while(id<=cid){
		if(ichang==0){ichang=c[id];}
		if(dchang==0){dchang=c[cid];}
		if(ichang>dchang){
		if(a[id]!=a[cid]){
			zong+=dchang;
		}
		ichang-=dchang;
		dchang=0;
		cid--;
		}
		else if(ichang==dchang){
			if(a[id]!=a[cid]){
				zong+=ichang;
			}
			dchang-=ichang;
			ichang=0;
			id++;cid--;
		}
		else{
			if(a[id]!=a[cid]){
				zong+=ichang;
			}
			dchang-=ichang;
			ichang=0;
			id++;
		}
	}
	cout<<zong;
	return 0;
}
