#include<bits/stdc++.h>
#define int long long 
using namespace std;
int q,w,e=0,a[200005];
bool cmp(int x,int y){
	return x>y;
}
vector<int>vc,an;

void ccp(int k){
	if(vc.size()==w){
		int kl=vc[0];
		for(int i=0;i<w;i++){
			kl&=vc[i];
		}
		e=max(e,kl);
		return ;
	}
	if(vc.size()>w){
		return ;
	}
	for(int i=k;i<=q;i++){
		vc.emplace_back(a[i]);
		ccp(i+1);
		vc.pop_back();
	}
}
signed main( ){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>q>>w;
	if(q<=25){
		for(int i=1;i<=q;i++){
			cin>>a[i];
		}
		ccp(1);
		cout<<e;
	}else{
		sort(a+1,a+1+q,cmp);
		int op=a[1];
		for(int i=2;i<=w;i++){
			op&=a[i];
		}
        cout<<op;
	}
	return 0;
} 