#include<bits/stdc++.h>
using namespace std;
string a1,b1;
string a2,b2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a1>>a2>>b1>>b2;
	if(a1[0]==b1[0] && a1[1]==b1[1]){
		cout<<1;
		if(a2[0]==b2[0] && a2[1]==b2[1]){
			cout<<1;
			int p=0,q=0;
			if(a2[2]<='C') p=1;
			else p=2;
			if(b2[2]<='C') q=1;
			else q=2;
			if(p==q){
				cout<<1;
				int f=0;
				if((a2[2]=='C' && b2[2]=='D')||(a2[2]=='D' && b2[2]=='C')) f=1;
				if(abs(int(a2[2])-int(b2[2]))==1 && f==0) cout<<1;
				else cout<<0;
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
}
