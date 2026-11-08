#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
string c1,c2,s1,s2;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)cout<<1;
	else{
	cout<<"0000";
	return 0;
    }
	string l1=s1.substr(0,2);
	string l2=s2.substr(0,2);
	if(l1==l2)cout<<1;
	else {
		cout<<"000";
		return 0;
	}
	int r1=int(s1[2]);
	int r2=int(s2[2]);
	if((65<=r1&&r1<=67&&65<=r2&&r2<=67)||(68<=r1&&r1<=69&&68<=r2&&r2<=69))cout<<1;
	else {
		cout<<"00";
		return 0;
	}
	if(abs(r1-r2)==1)cout<<1;
	else cout<<0;
	return 0;
} 
