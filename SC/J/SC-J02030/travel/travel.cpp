//travel
#include<bits/stdc++.h>
using namespace std;

string sa1,sa2,sb1,sb2;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>sa1>>sa2>>sb1>>sb2;
	//1
	if(sa1==sb1) cout<<1;
	else cout<<0;
	//2
	if(sa1==sb1&&sa2.substr(0,2)==sb2.substr(0,2)) cout<<1;
	else cout<<0;
	//3
	char za=sa2[2],zb=sb2[2];
	bool f=0;
	if(sa1==sb1&&sa2.substr(0,2)==sb2.substr(0,2)){
		if(za=='A'&&zb=='B') f=1;
		else if(za=='A'&&zb=='C') f=1;
		else if(za=='B'&&zb=='C') f=1;
		else if(za=='D'&&zb=='F') f=1;
		if(f) cout<<1;
		else cout<<0;
	}
	else cout<<0;
	//4
	if(sa1==sb1&&sa2.substr(0,2)==sb2.substr(0,2)&&f){
		bool v=0;
		if(za=='A'&&zb=='B') v=1;
		else if(za=='B'&&zb=='C') v=1;
		else if(za=='D'&&zb=='F') v=1;
		if(v) cout<<1;
		else cout<<0;
	}
	else cout<<0;
	return 0;
}