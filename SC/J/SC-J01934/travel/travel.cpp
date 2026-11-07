#include<bits/stdc++.h>
#include<string>
using namespace std;
long long a,s,d,f;
string q,w,e,r;
char t,y,u;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>q>>w>>e>>r;
	if(q!=e){
		cout<<"0000";
		return 0;
	}
	cout<<1;
	if((w[0]==r[0])&&(w[1]==r[1])){
		cout<<1;
		t=w[2];
		y=r[2];
		if((t=='A'&&y=='B')||(t=='A'&&y=='C')||(t=='B'&&y=='C')||(t=='D'&&y=='F')){
			cout<<1;
			if((t=='A'&&y=='B')||(t=='B'&&y=='C')||(t=='D'&&y=='F')){
				cout<<1;
				return 0;
			}
			cout<<0;
			return 0;
		}
		u=t;
		t=y;
		y=u;
		if((t=='A'&&y=='B')||(t=='A'&&y=='C')||(t=='B'&&y=='C')||(t=='D'&&y=='F')){
			cout<<1;
			if((t=='A'&&y=='B')||(t=='B'&&y=='C')||(t=='D'&&y=='F')){
				cout<<1;
				return 0;
			}
			cout<<0;
			return 0;
		}
		cout<<"00";
		return 0;
	}
	else{
		cout<<"000";
	}
	return 0;
}