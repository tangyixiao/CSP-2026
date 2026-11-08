#include<bits/stdc++.h>
using namespace std;
long long q,r;
string s,k;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>q>>s>>r>>k;
	if(q==r){
		cout<<1;
	}else{
		cout<<"0000";
		return 0;
	}
	long long a=s[1]+s[0]-96,c=k[0]-48+k[1]-48;
	char e=s[2],f=k[2];
	if(a==c){
		cout<<1;
		if(((e=='A'||e=='B'||e=='C')&&(f=='A'||f=='B'||f=='C'))||((e=='D'||e=='E')&&(f=='D'||f=='E'))){
			cout<<1;
			if(abs(e-f)==1){
				cout<<1;
				
			}else{
				cout<<0;
			}
		}else{
			cout<<"00";
			return 0;
		}
	}else{
		cout<<"000";
		return 0;
	}
	
	return 0;
}
 
