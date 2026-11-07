#include<bits/stdc++.h>
#define int long long
using namespace std;
char a,b,c,d,e,aa,bb,cc,dd,ee;
int aaa=1,bbb=1,ccc=1,ddd=1;
signed main(){
 	ios::sync_with_stdio(0);
 	cin.tie(0);
 	freopen("travel.in","r",stdin);
 	freopen("travel.out","w",stdout);
 	cin>>a>>b>>c>>d>>e>>aa>>bb>>cc>>dd>>ee;
 	if(a!=aa||b!=bb) aaa=0,bbb=0,ccc=0,ddd=0;
 	else{
 		if(c!=cc||d!=dd) bbb=0,ccc=0,ddd=0;
 		else{
 			if(!((e<='C'&&ee<='C')||(e>'C'&&ee>'C'))) ccc=0,ddd=0;
 			else{
 				if(abs(e-ee)!=1) ddd=0;
			}
		}
	}
	cout<<aaa;
	cout<<bbb;
	cout<<ccc;
	cout<<ddd;
 	return 0;
}
