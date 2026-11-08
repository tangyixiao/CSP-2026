#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==c){
		cout<<1;
		int p1=(b[0]-48)*10+b[1]-48;
		int p2=(d[0]-48)*10+d[1]-48;
		if(p1==p2){
			cout<<1;
			int w1=0,w2=0;
			if(b[2]=='A'||b[2]=='B'||b[2]=='C')w1=1;
			if(d[2]=='A'||d[2]=='B'||d[2]=='C')w2=1;
			if(w1==w2){
				cout<<1;
				if(abs(b[2]-d[2])==1)cout<<1;
				else cout<<0;
			}
			else {
				cout<<"00";
				return 0;
			}
		}
		else{
			cout<<"000";
			return 0;
		}
	}
	else {
		cout<<"0000";
		return 0;
	}
	return 0;
}
