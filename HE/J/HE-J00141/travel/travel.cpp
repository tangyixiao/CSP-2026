#include<bits/stdc++.h>
using namespace std;
#define ll long long
string c,s,cc,ss;
ll a,b;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c>>s>>cc>>ss;
	if(c!=cc){    //同一节车厢 
		cout<<0<<0<<0<<0;
		return 0;
	}else{
		cout<<1;
	}
	for(int i=0;i<=1;i++){       //同一排 
		a*=10;b*=10;
		a+=s[i]-'0';
		b+=ss[i]-'0';
	}
	if(a==b){
		cout<<1;
	}else{
		cout<<0<<0<<0;
		return 0;
	}
	
	char n=s[2],m=ss[2];
	if(n=='F'){
		n--;
	}if(m=='F'){
		m--;
	}
	if(( (n>='A' && n<='C') && (m>='A' && m<='C') )|| ((n=='E' || n=='D') && (m=='D' && m<='E'))){
		cout<<1;
		if(n==m+1 || n+1==m){
			if(n=='C' && m=='D'){
				cout<<0;
			}else{
				cout<<1;
			}
		}
		else{
			cout<<0;
		}
	}
	else
	{
		cout<<0<<0;
	}
	return 0;
} 

/*
A B
B C
D F
*/
