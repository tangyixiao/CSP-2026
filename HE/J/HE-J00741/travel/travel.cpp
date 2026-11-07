#include <bits/stdc++.h>
using namespace std;
int nt1,nt2,nsn1,nsn2,k,k1;
bool n,n1;
string ns1,ns2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>nt1>>ns1>>nt2>>ns2;
	k=ns1[0];
	k1=ns1[1];
	nsn1=(k-48)*10+k1-48;
	k=ns2[0];
	k1=ns2[1];
	nsn2=ns2[0]/'0'*10+ns2[1]/'0';
	if(ns1[2]=='A'||ns1[2]=='B'||ns1[2]=='C')n=1;
	if(ns2[2]=='A'||ns2[2]=='B'||ns2[2]=='C')n1=1;
	if(nt1==nt2){
		cout<<1;
		if(nsn1==nsn2){
			cout<<1;
			if(n1==n){
				cout<<1;
				if(ns1[2]+1==ns2[2] || ns1[2]==ns2[2]+1)cout<<1;
				else cout<<0;
			}
			else cout<<0<<0;
		}
		else cout<<0<<0<<0;
	}
	else cout<<0<<0<<0<<0;
	return 0;
} 
