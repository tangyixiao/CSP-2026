#include<bits/stdc++.h>
using namespace std;
int n=0,m=0,l=0;
string a,x,b,y;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>x>>b>>y;
	if(a==b){
		cout<<1;
		l++;	
	}
	else{
		cout<<0;
	}
	if(l==1 && x[0]==y[0] && x[1]==y[1]){
		cout<<1;
		n++;
	}
	else{
		cout<<0;
	}
	if(n==1 && ((x[2]=='A' || x[2]=='B' || x[2]=='C') && (y[2]=='A' || y[2]=='B' || y[2]=='C')) || ((x[2]=='D' || x[2]=='F') && (y[2]=='D' || y[2]=='F'))){
		cout<<1;
		m++;
	}
	else{
		cout<<0;
	}
	if(m==1 && ((x[2]=='A' && y[2]=='B') || (x[2]=='B' && (y[2]=='A' || y[2]=='C')) || (x[2]=='C' && y[2]=='B') || (x[2]=='D' && y[2]=='F') || (x[2]=='F' && y[2]=='D'))){
		cout<<1;
	}
	else{
		cout<<0;
	}
	return 0;
}
