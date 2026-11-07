#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
int k1,k2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1=="02"&&c2=="02"){
		cout<<1;
	}
	else{
		cout<<0<<0<<0<<0;
		return 0;
	}
	k1=(s1[0]-'0')*10+(s1[1]-'0');
	k2=(s2[0]-'0')*10+(s2[1]-'0');
	//cout<<k1<<' '<<k2<<endl;
	if(k1==k2){
		cout<<1;
	}
	else{
		cout<<0<<0<<0;
		return 0;
	}
	if(k1==k2&&((s1[2]>='A'&&s1[2]<='C'&&s2[2]>='A'&&s2[2]<='C')||(s1[2]>='D'&&s1[2]<='F'&&s2[2]>='D'&&s2[2]<='F'))){
		cout<<1;
		if((s1[2]=='D'&&s2[2]=='F')||(s2[2]=='D'&&s1[2]=='F')||(s1[2]=='C'&&s2[2]=='B')||(s2[2]=='C'&&s1[2]=='B')||(s1[2]=='A'&&s2[2]=='B')||(s2[2]=='A'&&s1[2]=='B')){
			cout<<1;
		}
		else{
			cout<<0;
		}
	}
	else{
		cout<<0<<0;
	}
	return 0;
}