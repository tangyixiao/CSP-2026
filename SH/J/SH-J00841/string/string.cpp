#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=200005;
struct str{
	int a;//字符 
	ll num;//数量 
}s[N]; 
int n,L=1,R;
char q;
ll ans,l,r,leng;
int main(){
	freopen("string.in","r",stdin);
	//输入 
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i].num>>q;
		s[i].a=int(q);
	}
	R=n;
	l=s[L].num;
	r=s[R].num;
	while(L!=R){
		//若不等，改 
		if(s[L].a!=s[R].a){
			ans+=min(l,r);
		}
		//推
		if(l<r){
			r-=l;
			L++;
			l=s[L].num;
		}
		else{
			l-=r;
			R--;
			r=s[R].num;
		}
	}
	freopen("string.out","w",stdout);
	cout<<ans;
}
