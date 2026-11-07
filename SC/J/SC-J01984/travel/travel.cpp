#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string s1,s2,t1,t2;
	cin>>s1>>s2>>t1>>t2;
	if(s1==t1) cout<<1;
	else{
		cout<<0<<0<<0<<0;
		return 0;
	}
	char c1=s2[0],c2=s2[1],c3=s2[2],h1=t2[0],h2=t2[1],h3=t2[2];
	if(c1==h1&&c2==h2) cout<<1;
	else{
		cout<<0<<0<<0;
		return 0;
	}
	if(int(c3)>int(h3)) swap(c3,h3);
	if((c3=='A'&&(h3=='B'||h3=='C'))||(c3=='B'&&h3=='C')||(c3=='D'&&h3=='F')) cout<<1;
	else{
		cout<<0<<0;
		return 0;
	}
	if((c3=='D'&&h3=='F')||(c3=='A'&&h3=='B')||(c3=='B'&&h3=='C')) cout<<1;
	else{
		cout<<0;
		return 0;
	}
	return 0;
}