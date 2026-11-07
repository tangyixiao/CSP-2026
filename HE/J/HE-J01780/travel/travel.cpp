#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int q,w,e,r,t,y;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	q=(c1[0]-'0')*10+c1[1];
	w=(s1[0]-'0')*10+s1[1];
	if(s1[2]=='A'||s1[2]=='B'||s1[2]=='C')t=1;
	else t=2;
	e=(c2[0]-'0')*10+c2[1];
	r=(s2[0]-'0')*10+s2[1];
	if(s2[2]=='D'||s2[2]=='F')y=2;
	else y=1;
	if(q==e){
		cout<<1;
		if(w==r){
			cout<<1;
			if(t==y){
				cout<<1;
				if(s1[2]-s2[2]==1||s2[2]-s1[2]==1)cout<<1;
				else cout<<0;
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
}
