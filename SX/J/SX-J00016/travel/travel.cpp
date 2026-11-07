#include<bits/stdc++.h>
using namespace std;
int c1,c2,s1n,s2n;
char s1e,s2e;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	scanf("%d %d%c %d %d%c",&c1,&s1n,&s1e,&c2,&s2n,&s2e);
	if(c1==c2){
		cout<<1;
		if(s1n==s2n){
			cout<<1;
			if((s1e=='A' and s2e=='B') 
			or (s1e=='B' and s2e=='A') 
			or (s1e=='A' and s2e=='C') 
			or (s1e=='C' and s2e=='A') 
			or (s1e=='B' and s2e=='C') 
			or (s1e=='C' and s2e=='B') 
			or (s1e=='D' and s2e=='F') 
			or (s1e=='F' and s2e=='D')){
				cout<<1;
				if((s1e=='A' and s2e=='B') 
				or (s1e=='B' and s2e=='A') 
				or (s1e=='B' and s2e=='C') 
				or (s1e=='C' and s2e=='B') 
				or (s1e=='D' and s2e=='F') 
				or (s1e=='F' and s2e=='D')){
					cout<<1;
				}else cout<<0;
			}else cout<<"00";
		}else cout<<"000";
	}else cout<<"0000";
	return 0;
}
