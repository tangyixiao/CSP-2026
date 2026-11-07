#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	string sss1,sss2,sss3,sss4;
	cin>>sss1>>sss2>>sss3>>sss4;
	if(sss1!=sss3){
		cout<<"0000";
		return 0;
	}
	cout<<1;
	if(sss2[0]+sss2[1]!=sss4[0]+sss4[1]){
		cout<<"000";
		return 0;
	}
	cout<<1;
	if((sss2[2]>='A'&&sss4[2]<='C'&&sss4[2]>='A'&&sss4[2]<='C')||(sss2[2]>='D'&&sss4[2]<='E'&&sss4[2]>='D'&&sss4[2]<='E')) cout<<1;
	else {
		cout<<"00";
		return 0;
	}
	if(abs((int)sss2[2]-(int)sss4[2])==1) cout<<1;
	else cout<<0;
	return 0;
}
