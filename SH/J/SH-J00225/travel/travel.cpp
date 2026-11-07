#include<bits/stdc++.h>
using namespace std;
using ll=long long;
bool isx(char a,char b){
	if(a>='A' && a<='C' && b>='A' && b<='C')	return true;
	if((a=='D' && b=='F') || (a=='F' && b=='D'))	return true;
	return false;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int c1,c2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	int a1=(s1[0]-'0')*10+(s1[1]-'0'),a2=(s2[0]-'0')*10+(s2[1]-'0');
	char cc1=s1[2],cc2=s2[2];
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	cout<<1;
	if(a1==a2){
		cout<<1;
	}else{
		cout<<"000";
		return 0;
	}
	if(isx(cc1,cc2)){
		cout<<1;
	}else{
		cout<<"00";
		return 0;
	}
	if(abs(cc1-cc2)==1){
		cout<<1; 
	}else{
		cout<<0;
	}
	return 0;
}
