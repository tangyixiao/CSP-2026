#include<bits/stdc++.h>
using namespace std;
const int MAXN=2e5+5;
#define int long long
int n;
struct node{
	int u;
	char v;
}a[MAXN];
deque<node>dq;
int s[MAXN];
int len;
int f(){
	int ans=0;
	for(;dq.size()>=3;){
		node fr=dq.front();
		node en=dq.back();
		dq.pop_front();
		dq.pop_back();
		if(fr.v!=en.v){
			ans+=abs(fr.u-en.u);
		}
		if(fr.u>en.u){
			fr.u-=en.u;
			dq.push_front(fr);
		}else{
			if(fr.u<en.u){
				en.u-=fr.u;
				dq.push_back(en);
			}
		}
	}
	node fr=dq.front();
	node en=dq.back();
	if(fr.v==fr.u||dq.size()==1){
		return ans;
	}else{
		return ans+min(en.u,fr.u);
	}
}
signed main(void){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);	
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].u>>a[i].v;
		s[i]=s[i-1]+a[i].u;
		dq.push_back(a[i]);
	}
	len=s[n]/2;
	cout<<f();
	return 0;
}
