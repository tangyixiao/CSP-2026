#include <bits/stdc++.h>
using namespace std;
struct st{
	int c;
	int s1;
	char s2;
};
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	st r,x;
	cin>>r.c>>r.s1>>r.s2>>x.c>>x.s1>>x.s2;
	if(r.c==x.c){
		cout<<1;
	}else{
		cout<<0<<0<<0<<0;
		return 0;
	}
	if(r.s1==x.s1){
		cout<<1;
	}else{
		cout<<0<<0<<0;
		return 0;
	}
	if(((r.s2=='A'||r.s2=='B'||r.s2=='C')&&(x.s2=='A'||x.s2=='B'||x.s2=='C'))||((r.s2=='D'||r.s2=='E')&&(x.s2=='D'||x.s2=='E'))){
		cout<<1;
	}else{
		cout<<0<<0;
		return 0;
	}
	if((((r.s2=='A'||r.s2=='C')&&x.s2=='B')||((x.s2=='A'||x.s2=='C')&&r.s2=='B'))||((r.s2=='D'||r.s2=='E')&&(x.s2=='D'||x.s2=='E'))){
		cout<<1;
		return 0;
	}else{
		cout<<0;
		return 0;
	}
}

