#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s1,c1,s2,c2;
	cin>>s1>>c1>>s2>>c2;
	bool t1=true;
	if(s1==s2){
		cout<<1; 
	}else{
		cout<<0;
		t1=false;
	}
	ll n1=(c1[0]-'0')+(c1[1]-'0');
	ll n2=(c2[0]-'0')+(c2[1]-'0');
	bool t2=true;
	if(t1 && n1==n2){
		cout<<1;
	}else{
		cout<<0;
		t2=false;
	}
	char l1=c1[2],l2=c2[2];
	ll p1=int(l1),p2=int(l2);
	bool t3=true;
	if(t1 && t2){
		if( p1<=67 && p2<=67 || p1>=68 && p2>=68 ){
			cout<<1;
		}else{
			cout<<0;
			t3=false;
		}
	}else{
		cout<<0;
		t3=false;
	}
	ll k1=p1-p2;
	k1=abs(k1); 
	if(t1 && t2 && t3 && k1==1){
		cout<<1;
	}else{
		cout<<0; 
	}
	

	return 0;
} 
