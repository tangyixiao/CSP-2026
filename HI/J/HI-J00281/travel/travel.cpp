#include<bits/stdc++.h>
using namespace std;
int a,b;
string a1,b1;
bool a2,b2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>a1>>b>>b1;
	if(a==b)cout<<1;
	else cout<<0;
	if(a==b&&a1[0]==b1[0]&&a1[1]==b1[1])cout<<1;
	else{
		cout<<"000";
		return 0;
	} 
	
	if(a1[2]>'C')a2=1;
	else a2=0;
	if(b1[2]>'C')b2=1;
	else b2=0;
	if(a2==b2)cout<<1;
	else cout<<0;
	int a22=a1[2];
	int b22=b1[2];
    if(abs(a22-b22)==1&&!(a1[2]=='C'&&b1[2]=='D'||a1[2]=='D'&&b1[2]=='C')||a22=='F'&&b22=='D'||a22=='D'&&b22=='F'){
    	cout<<1;
	}else cout<<0;
	return 0;
}
