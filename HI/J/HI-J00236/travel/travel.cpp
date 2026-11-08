#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string chr;
	string chx;
	string sr;
	string sx;
	getline(cin,chr,' ');
getline(cin,sr,' ');
getline(cin,chx,' ');
getline(cin,sx);
if((chr[0]==chx[0])&&(chr[1]==chx[1])){
	cout<<1;
}
else{
	cout<<0;
}
if(((chr[0]==chx[0])&&(chr[1]==chx[1]))&&((sr[0]==sx[0])&&(sr[1]==sx[1]))){
	cout<<1;
	if((sr[2]>=65&&sr[2]<=67)&&(sx[2]>=65&&sx[2]<=67)||((sr[2]==70&&sx[2]==68)||(sr[2]==68&&sx[2]==70))){
		cout<<1;
	
		if(((sr[2]=='F'||sr[2]=='D')&&(sr[2]+2==sx[2]||sx[2]+2==sr[2]))||(sr[2]+1==sx[2]||sr[2]-1==sx[2])){
			cout<<1;
		}
		else{
			cout<<0;
		}
	}
		else{
		cout<<"00";
	}
}
else{
	cout<<"000";
}

	return 0;
}

