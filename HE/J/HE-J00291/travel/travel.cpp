#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	bool che=0,zuo=0,pai=0,tong=0;
	string c,s,cc,ss;
	cin>>c>>s>>cc>>ss;
	if(c[0]==cc[0]&&c[1]==cc[1]){
		che=1;
	if(s[0]==ss[0]&&s[1]==ss[1]){
		zuo=1;
	if(s[2]=='A'){
		if(ss[2]=='B'){
			pai=1;tong=1;
		}
		if(ss[2]=='C'){
			pai=1;tong=0;
		}
	}
	if(s[2]=='B'){
		if(ss[2]=='A')
		{
			pai=1;tong=1;
		}
		if(ss[2]=='C'){
			pai=1;tong=0;
		}
	}
	if(s[2]=='C'){
		if(ss[2]=='B'){
			pai=1;tong=1;
		}
		if(ss[2]=='A'){
			pai=1;tong=0;
		}
	}
	if(s[2]=='D'){
		if(ss[2]=='F'){
			pai=1;tong=1;
		}
	}
	if(s[2]=='F'){
		if(ss[2]=='D'){
			pai=1;tong=1;
		}
	}
	}
	}
	cout<<che<<zuo<<pai<<tong;
	return 0;
}
