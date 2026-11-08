#include<bits/stdc++.h>
using namespace std;
string ca,sa,cb,sb;
int a,b,c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>ca>>sa>>cb>>sb;
	if(ca==cb) a=1;
	if(sa.substr(0,2)==sb.substr(0,2)&&a==1) b=1;
	if(a==1&&b==1){
		if(sa[2]=='A'||sa[2]=='B'||sa[2]=='C'){
			if(sb[2]=='A'||sb[2]=='B'||sb[2]=='C') c=1;
		}
		if(sa[2]=='D'||sa[2]=='F'){
			if(sb[2]=='D'||sb[2]=='F') c=1;
		}
	}
	char x=sa[2],y=sb[2];
	if(x<y) swap(x,y);
	if(x-y==1&&c==1&&a==1&&b==1) d=1;
	cout<<a<<b<<c<<d;
	return 0;
}
