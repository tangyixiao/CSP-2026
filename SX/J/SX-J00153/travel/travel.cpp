#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;cin >>c1>>s1>>c2>>s2;
	char zw=s1[2],zw1=s2[2];
	int a=0,b=0,c=0,d=0;
	if(c1==c2){
		a=1;
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			b=1;
			if((zw>='A'&&zw<='C'&&zw1>='A'&&zw1<='C')||((zw=='F'||zw=='D')&&(zw1=='F'||zw1=='D'))){
				c=1;
				if((zw>='A'&&zw<='C'&&zw1>='A'&&zw1<='C'&&abs(zw1-zw)==1)||zw=='F'&&zw1=='D'||zw=='D'&&zw1=='F'){
					d=1;
				}
			}
		}
	}
	cout<<a<<b<<c<<d;
	return 0;
}