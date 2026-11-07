#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);	
	bool f=0;
	string a,b,n1,n2;
	cin>>a>>n1>>b>>n2;
	if(a==b){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if((n1[1]==n2[1])&&(n1[0]==n2[0])){
		cout<<1;
		if(( n1[2]=='A' || n1[2]=='B' || n1[2]=='C' )&&( n2[2]=='A' || n2[2]=='B' || n2[2]=='C' )){
			cout<<1;
			f=1;
		}
		else if(( n1[2]=='D' || n1[2]=='E' )&&( n2[2]=='D' || n2[2]=='E' )){
			cout<<1;
			f=1;
		}
		else{
			cout<<0;
		}
	}
	else{
		cout<<0;
	}
	if( f &&( n1[2]-n2[2]==1 || n2[2]-n1[2]==1 )){
		cout<<1;
	}
	else{
		cout<<0;
	}
	return 0;
} 
