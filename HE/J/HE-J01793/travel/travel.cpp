#include<bits/stdc++.h>
using namespace std;
long long f1,f2;
string rc,rs,xc,xs; 
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0); 
    cin>>rc>>rs>>xc>>xs;
    if (rc==xc){
    	f1=1;
    	cout<<1;
	}else{
		cout<<0;
	}
	if (f1==1&&rs[0]==xs[0]&&rs[1]==xs[1]){
		f2=1;
		cout<<1;
	}else{
		cout<<0;
	}
	if (f1==1&&f2==1&&((rs[2]=='A'&&xs[2]=='B')||(rs[2]=='A'&&xs[2]=='C')||(rs[2]=='B'&&xs[2]=='A')||(rs[2]=='B'&&xs[2]=='C')||(rs[2]=='C'&&xs[2]=='A')||(rs[2]=='C'&&xs[2]=='B')||(rs[2]=='D'&&xs[2]=='F')||(rs[2]=='F'&&xs[2]=='D'))){
		cout<<1;
	}else{
		cout<<0;
	}
	if (f1==1&&f2==1&&((rs[2]=='A'&&xs[2]=='B')||(rs[2]=='B'&&xs[2]=='C')||(rs[2]=='B'&&xs[2]=='A')||(rs[2]=='C'&&xs[2]=='B')||(rs[2]=='F'&&xs[2]=='D')||(rs[2]=='D'&&xs[2]=='F'))){
		cout<<1;	
	}else{
		cout<<0;
	}
	return 0;
}
