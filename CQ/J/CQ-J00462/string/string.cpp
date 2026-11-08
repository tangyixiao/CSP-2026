#include<bits/stdc++.h>
#define int long long
using namespace std;
struct node{
	int x;
	char lx;
};
int n,cnt,res,id,ans;
int a[200005];
char c[200005]; 
queue<node> le,ri;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];cnt+=a[i];
	}
	cnt=(cnt+1)/2;
	
	for(int i=1;i<=n;i++){
		if(cnt-a[i]>=0) cnt-=a[i];
		else{
			id=i;
			res=cnt;
			break;
		}
	}
	int l=res-1,r=a[id]-res;
//	cout<<res<<" "<<id<<" "<<l<<" "<<r<<"\n";
	if(l>0)le.push({l,c[id]});
	if(r>0)ri.push({r,c[id]});
	for(int i=id-1;i>=1;i--){
		le.push({a[i],c[i]});
	}
	for(int i=id+1;i<=n;i++){
		ri.push({a[i],c[i]});
	}

	while(le.size()&&ri.size()){
		
		node &a=le.front(),&b=ri.front();
//		cout<<a.x<<" "<<a.lx<<" "<<b.x<<" "<<b.lx<<"\n";
		if(a.lx!=b.lx) ans+=min(a.x,b.x);
		int ko=a.x;
		a.x-=min(a.x,b.x);
//		cout<<a.x<<"\n";
		b.x-=min(ko,b.x);
//		cout<<b.x-min(a.x,b.x)<<"\n";
		if(a.x==0){
			le.pop();	
		}
		if(b.x==0){
			ri.pop();
		}
	}
	while(le.size()){
		ans+=le.front().x;
		le.pop();
	}
//	cout<<"\n";
	while(ri.size()){
		ans+=ri.front().x;
		ri.pop();
	}
	cout<<ans;
	return 0;
}
/*
10
3 x
5 i
2 u
4 h
3 g
3 x
5 i
2 u
4 h
3 g
*/
