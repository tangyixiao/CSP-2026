#include<bits/stdc++.h>

using namespace std;

string c1,s1,c2,s2;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)cout<<1;
	else{
		cout<<"0000";
		return 0;
	}
	
	if(s1[0]+s1[1]==s2[0]+s2[1])cout<<1;
	else{
		cout<<"000";
		return 0;
	}
	
	char w1=s1[2],w2=s2[2];
	if(w2=='A'||w2=='B'||w2=='C'){
		if(w1=='D'||w1=='F'){
			cout<<"00";
			return 0;
		}
		else cout<<1;
	}
	else if(w2=='D'||w2=='F'){
		if(w1=='A'||w1=='B'||w1=='C'){
			cout<<"00";
			return 0;
		}
		else cout<<1;
	}
	
	if(w1=='A'){
		if(w2=='B')cout<<1;
		else cout<<0;
	}
	else if(w1=='B'){
		if(w2=='A'||w2=='C')cout<<1;
		else cout<<0;
	}
	else if(w1=='C'){
		if(w2=='B')cout<<1;
		else cout<<0;
	}
	else if(w1=='D'){
		if(w2=='F')cout<<1;
		else cout<<0;	
	}
	else if(w1=='F'){
		if(w2=='D')cout<<1;
		else cout<<0;
	}
	return 0;
}
