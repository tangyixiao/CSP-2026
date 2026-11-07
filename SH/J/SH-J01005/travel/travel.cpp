#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}cout<<'1';
	int x1=(s1[0]-'0')*10+s1[1]-'0';
	char x2=s1[2];
	int p1=(s2[0]-'0')*10+s2[1]-'0';
	char p2=s2[2];
	if(x1!=p1){
		cout<<"000";
		return 0;
	}cout<<1;
	if(x2=='A' and p2=='D'){
		cout<<"00";
		return 0;
	}if(x2=='A' and p2=='F'){
		cout<<"00";
		return 0;
	}if(x2=='B' and p2=='D'){
		cout<<"00";
		return 0;
	}if(x2=='B' and p2=='F'){
		cout<<"00";
		return 0;
	}if(x2=='C' and p2=='D'){
		cout<<"00";
		return 0;
	}if(x2=='C' and p2=='F'){
		cout<<"00";
		return 0;
	}if(p2=='A' and x2=='D'){
		cout<<"00";
		return 0;
	}if(p2=='A' and x2=='F'){
		cout<<"00";
		return 0;
	}if(p2=='B' and x2=='D'){
		cout<<"00";
		return 0;
	}if(p2=='B' and x2=='F'){
		cout<<"00";
		return 0;
	}if(p2=='C' and x2=='D'){
		cout<<"00";
		return 0;
	}if(p2=='C' and x2=='F'){
		cout<<"00";
		return 0;
	}cout<<'1';
	if(x2=='A' and p2=='C'){
		cout<<"0";
		return 0;
	}if(x2=='C' and p2=='A'){
		cout<<"0";
		return 0;
	}cout<<'1';
	return 0;
}
