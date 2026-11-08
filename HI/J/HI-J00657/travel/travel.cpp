#include<bits/stdc++.h>
using namespace std;
int main(){
	//freopen("travel.in","r","stdin")
	//freopen("travel.out","w","stdout")
	int cx1,cx2;
	char zw1[6],zw2[6];
	cin>>cx1>>zw1>>cx2>>zw2;
	if(cx1==cx2)cout<<1;
	else {cout<<0;cout<<0;cout<<0;cout<<0;return 0;}
	if(zw1[0]*10+zw1[1]==zw2[0]*10+zw2[1])cout<<1;
	else {cout<<0;cout<<0;cout<<0;return 0;}
	if(zw1[2]=='C'&&zw2[2]=='D'){cout<<0;cout<<0;return 0;}
	else{
		if(zw1[2]=='D'&&zw2[2]=='C'){cout<<0;cout<<0;return 0;}
		else cout<<1;
	}
	if(zw1[2]+1==zw2[2]||zw2[2]+1==zw1[2])cout<<1;
	else cout<<0;
	return 0;
}
