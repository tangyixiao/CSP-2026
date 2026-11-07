#include<bits/stdc++.h>
using namespace std;
int a,b,q,w,e;
char c[5],d[5];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>c>>b>>d;
	if(a==b){e++;cout<<"1";}
	else cout<<"0";
	q=q*10+(c[0]-'0');
	q=q*10+(c[1]-'0');
	w=w*10+(d[0]-'0');
	w=w*10+(d[1]-'0');
	if(e==1&&q==w){e++;cout<<"1";}
	else cout<<"0";
	if(e==2&&(c[2]-'A'<=2&&d[2]-'A'<=2)||(c[2]-'A'>2&&d[2]-'A'>2)){e++;cout<<"1";}
	else cout<<"0";	
	if(e==3&&abs(c[2]-'A'-d[2]+'A')<=1)cout<<"1";
	else cout<<"0";
	return 0;
}
	
