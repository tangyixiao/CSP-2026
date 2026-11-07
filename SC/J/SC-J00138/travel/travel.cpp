#include <bits/stdc++.h> 
using namespace std;
int c1,c2,s1n,s2n;
char s1w,s2w;
int main(){
	freopen("travel.in","r",stdin);
	cin>>c1>>s1n>>s1w;
	cin>>c2>>s2n>>s2w;
	if(c1==c2) cout<<1;  
	else{cout<<0<<0<<0<<0; return 0;}
	if(s1n==s2n) cout<<1;
	else {cout<<0<<0<<0; return 0;}
	if(s1w<='C'&&s2w>='D') {cout<<0<<0;return 0;}
	else if(s1w>='D'&&s2w<='C') {cout<<0<<0;return 0;}
	else cout<<1;
	if(s1w-s2w==1) cout<<1; 
	else if(s2w-s1w==1) cout<<1;
	else cout<<0;
	freopen("travel.out","w",stdout);
    return 0;
}