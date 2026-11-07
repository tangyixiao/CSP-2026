#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	int a,b;
	string s1,s2;
	cin>>a>>s1>>b>>s2;
	if(a==b)cout<<1;
	else{
		cout<<"0000";
		return 0;
	} 
	int p1=(s1[0]-'0')*10+(s1[1]-'0');
	int p2=(s2[0]-'0')*10+(s2[1]-'0');
	if(p1==p2)cout<<1;
	else{
		cout<<"000";
		return 0;
	}
	if(s1[2]=='A' && (s2[2]=='B' || s2[2]=='C')){
		cout<<1;
		if(s2[2]=='B')cout<<1;
		else cout<<0;	
	}
	else if(s1[2]=='B' && (s2[2]=='A' || s2[2]=='C'))cout<<11;
	else if(s1[2]=='C' && (s2[2]=='A' || s2[2]=='B')){
		cout<<1;
		if(s2[2]=='B')cout<<1;
		else cout<<0;
	}
	else if(s1[2]=='D' && s2[2]=='F')cout<<11;
	else if(s1[2]=='F' && s2[2]=='D')cout<<11;
	else cout<<"00";
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
} 