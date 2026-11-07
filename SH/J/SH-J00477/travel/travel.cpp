#include<bits/stdc++.h> 
using namespace std;
string a,b,c,d;

bool sss(char x,char y){
	if((x=='A'||x=='b'||x=='C')&&(y=='A'||y=='B'||y=='C')){
		return 1;
	}else{
		if((x=='D'||x=='F')&&(y=='D'||y=='F')){
			return 1;
		}else{
			return 0;
		}
	}
} 
bool ss(char n,char m){
	if((abs(n-m)==1)&&sss(n,m)){
		return 1;
	}
	return 0;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	cout<<(a==c);
	cout<<((a==c)&&(b[0]==d[0])&&(b[1]==d[1]));
	cout<<((a==c)&&(b[0]==d[0])&&(b[1]==d[1])&&sss(b[2],d[2]));
	cout<<((a==c)&&(b[0]==d[0])&&(b[1]==d[1])&&ss(b[2],d[2]));
	
	
	
	
	
	
	
	
	
	
	return 0;
}
