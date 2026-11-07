#include<bits/stdc++.h>
using namespace std;
string s1,s2,s3,s4;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>s2>>s3>>s4;
	if(s1!=s3){
		cout<<"0000";
		return 0;
	}
	cout<<1;
	int x=s2[0]*10+s2[1]-'0'*11;
	int y=s4[0]*10+s4[1]-'0'*11;
	if(x!=y){
		cout<<"000";
		return 0;
	}
	cout<<1;
	bool f1=s2[2]>='D',f2=s4[2]>='D';
	if(f1!=f2){
		cout<<"00";
		return 0;
	}
	cout<<1;
	if(abs(s2[2]-s4[2])!=1) cout<<0;
	else cout<<1;
	return 0;
}