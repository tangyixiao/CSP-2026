#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int m,n,a,b;
	char p,q;
	cin>>n>>a;
	cin>>p;
	cin>>m>>b;
	cin>>q;
	if(n==m)cout<<1;
	else {
		cout<<"0000";
		return 0;
	}
	if(a==b)cout<<1;
	else {
		cout<<"000";
		return 0;
	}
	int aa;
	if(p =='A'||p=='B'||p=='C'){
		if(q=='A'||q=='B'||q=='C'){
			cout<<1;
			aa=1;
		}
		else {
			cout<<"00";
			return 0;
		}
	}
	else {
		if(q=='D'||q=='F'){
			cout<<1;
			aa=2;
		}
		else {
			cout<<"00";
			return 0;
		}
	}
	if(aa==2)cout<<1;
	else {
		if(q+1==p||p+1==q)cout<<1;
		else cout<<"0";
	}
	return 0;
} 