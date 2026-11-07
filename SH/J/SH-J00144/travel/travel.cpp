#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int d1,d2;
	string s1,s2;
	cin>>d1>>s1>>d2>>s2;
	if(d1!=d2){
		cout<<"0000";
		return 0;
	}
	cout<<1;
	int r1=(s1[0]-'0')*10+s1[1]-'0',r2=(s2[0]-'0')*10+s2[1]-'0';
	char c1=s1[2],c2=s2[2];
	if(r1!=r2){
		cout<<"000";
		return 0;
	}
	cout<<1;
	if((c1<='C')!=(c2<='C')){
		cout<<"00";
		return 0;
	}
	cout<<1;
	if(abs(c1-c2)==1) cout<<1;
	else cout<<0;
	return 0;
} 
