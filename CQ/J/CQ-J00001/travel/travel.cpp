#include<bits/stdc++.h>
using namespace std;
char A,AA,B,BB;
char Aa,Ab,Ac;char Ba,Bb,Bc;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>A>>AA;
	cin>>Aa>>Ab>>Ac;
	cin>>B>>BB;
	cin>>Ba>>Bb>>Bc;
	if(A==B&&AA==BB){
		cout<<1;
	} 
	else{
		cout<<"0000";
		return 0;
	}
	if(Aa==Ba&&Ab==Bb){
		cout<<1;
	}
	else{
		cout<<"000";
		return 0;
	}
	if(((Ac=='A'||Ac=='B'||Ac=='C')&&(Bc=='A'||Bc=='B'||Bc=='C'))||((Ac=='D'||Ac=='F')&&(Bc=='D'||Bc=='F'))){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if((Ac=='A'&&Bc=='B')||(Ac=='B'&&Bc=='A')||(Ac=='C'&&Bc=='B')||(Ac=='B'&&Bc=='C')||(Ac=='D'&&Bc=='F')||(Ac=='F'&&Bc=='D')){
		cout<<1;
	}
	else{
		cout<<0;
	}
	return 0;
} 
