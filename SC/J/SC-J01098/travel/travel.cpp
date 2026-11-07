#include<bits/stdc++.h>
using namespace std;
#define ll long long
string c1,s1,c2,s2;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)cout<<"1";
	else cout<<"0";
	int h1,h2;
	h1=(s1[0]-'0')*10+(s1[1]-'0');
	h2=(s2[0]-'0')*10+(s2[1]-'0');
	if(c1==c2&&h1==h2)cout<<"1";
	else cout<<"0";
	char d1=s1[2],d2=s2[2];
	if(d1>d2)swap(d1,d2);
	
	bool p1=('A'<=d1&&d1<='C'&&'A'<=d2&&d2<='C'),p2=((d1=='D'||d1=='F')&&(d2=='D'||d2=='F'));
	if(c1==c2&&h1==h2&&(p1||p2)){
		cout<<"1";
	}else cout<<"0";
	
	if(c1==c2&&h1==h2&&(p1||p2)){
		if(p1&&(d2-d1<=1)){
			cout<<"1";
		}else if(p2&&(d1=='D'&&d2=='F')){
			cout<<"1";
		}else cout<<"0";
	}else cout<<"0";
	return 0;
}
