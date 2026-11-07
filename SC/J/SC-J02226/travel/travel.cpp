#include<bits/stdc++.h>
using namespace std;
int a,a2,b,b2;
char aa,bb;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>a2>>aa>>b>>b2>>bb;
	if(a==b) cout<<1;
	else cout<<0;
	if(a2==b2&&a==b) cout<<1;
	else cout<<0;
	if(((aa>=65&&aa<=67&&bb>=65&&bb<=67)||(aa>67&&aa<=70&&bb>67&&bb<=70))&&a==b&&a2==b2) cout<<1;
	else cout<<0;
	if((aa-bb==1||bb-aa==1||(aa=='F'&&bb=='D')||(aa=='F'&&bb=='D'))&&((aa>=65&&aa<=67&&bb>=65&&bb<=67)||(aa>67&&aa<=70&&bb>67&&bb<=70))&&a==b&&a2==b2) cout<<1;
	else  cout<<0;
	return 0;
} 