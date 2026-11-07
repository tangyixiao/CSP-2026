#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string ca,sa,cb,sb;
	cin>>ca>>sa>>cb>>sb;
	if(ca[0]==cb[0] && ca[1]==cb[1]) cout<<"1";
	else{
		cout<<"0000";
		return 0;
	}
	if(sa[1]==sb[1] && sa[0]==sb[0]) cout<<"1";
	else{
		cout<<"000";
		return 0;
	}
	if(sa[2]<='C' && sb[2]<='C' || sa[2]>'C' && sb[2]>'C') cout<<"1";
	else{
		cout<<"00";
		return 0;
	}
	if(int(sa[2])+1==int(sb[2]) || int(sa[2])-1==int(sb[2])) cout<<"1";
	else cout<<"0";
	return 0;
} 