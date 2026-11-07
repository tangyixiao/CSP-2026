#include<bits/stdc++.h>
#include<cstdio>
#define int long long
#define endl '\n'
using namespace std;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int cs1,cs2;
	string zw1,zw2;
	cin>>cs1>>zw1>>cs2>>zw2;
	if(cs1==cs2){
		cout<<1;
	}else{
		cout<<"0000";
		return 0;
	}
	if(zw1[0]==zw2[0]&&zw1[1]==zw2[1]){
		cout<<1;
	}else{
		cout<<"000";
		return 0;
	}
	if(((zw1[2]=='A'||zw1[2]=='B'||zw1[2]=='C')&&(zw2[2]=='A'||zw2[2]=='B'||zw2[2]=='C'))||((zw1[2]=='D'||zw1[2]=='F')&&(zw2[2]=='D'||zw2[2]=='F'))){
		cout<<1;
	}else{
		cout<<"00";
		return 0;
	}
	if(((zw1[2]=='A'||zw1[2]=='B')&&(zw2[2]=='A'||zw2[2]=='B'))||((zw1[2]=='C'||zw1[2]=='B')&&(zw2[2]=='C'||zw2[2]=='B'))||((zw1[2]=='D'||zw1[2]=='F')&&(zw2[2]=='D'||zw2[2]=='F'))){
		cout<<1;
	}else{
		cout<<"0";
		return 0;
	}
	return 0;
}