#include<bits/stdc++.h>
using namespace std;
long long x,y,p,q;
string a,b;
char s,k,l;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>x;
	cin>>a;
	cin>>y;
	cin>>b;
	s=a[0];
	p+=(s-'0')*10;
	s=a[1];
	p+=(s-'0');
	s=b[0];
	q+=(s-'0')*10;
	s=b[1];
	q+=(s-'0');
	k=a[2];
	l=b[2];
	if(x!=y)cout<<"0000";
	else{
		cout<<1;
		if(q!=p)cout<<"000";
		else{
			cout<<"1";
			if((k=='F'&&l=='D') || (k=='D'&&l=='F') || (k=='A'&& l=='B') ||(k=='B'&&l=='A') || (k=='A'&&l=='C') || (k=='C'&& l=='A') || (k=='C'&& l=='B')||(k=='B'&&l=='C') ){
				cout<<"1";
				if((k=='F'&&l=='D') || (k=='D'&&l=='F'))cout<<"1";
				else{
					if((k=='A'&&l=='C') || (k=='C'&& l=='A'))cout<<"0";
					else cout<<1;
				}
			}else{
				cout<<"00";
			}
		}
	}
	return 0;
	
} 
