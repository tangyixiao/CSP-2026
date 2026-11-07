#include <bits/stdc++.h>
using namespace std;

int r1,r2;
string s,t;

int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin>>r1>>s>>r2>>t;
	if (r1==r2){
		cout<<1;
	}  else{
		cout<<0;
	}
	if (s[0]==t[0] && s[1]==t[1] && r1==r2){
		cout<<1;
	} else{
		cout<<0;
	}
	if (s[0]==t[0] && s[1]==t[1] && r1==r2){
		if (s[2]>='A' && s[2]<='C' && t[2]>='A' && t[2]<='C'){
			cout<<1;
		} else{
			if ((s[2]=='D' || s[2]=='F') && (t[2]=='D' || t[2]=='F')){
				cout<<1;
			} else{
				cout<<0;
			}
		}
	} else{
		cout<<0;
	}
	if (s[0]==t[0] && s[1]==t[1] && r1==r2){
		int p=(int)s[2];
		int q=(int)t[2];
		p-='A';
		q-='A';
		p++;q++;
		if (max(p,q)<=3){
			if (abs(p-q)==1){
				cout<<1;
			} else{
				cout<<0;
			}
		} else{
			if ((p==3 && q==4) || (p==4 && q==3)){
				cout<<0;
			} else{
				if (abs(p-q)==1){
					cout<<1;
				} else{
					cout<<0;
				}
			}
		}
	} else{
		cout<<0;
	}
} 