#include<iostream>
using namespace std;
int a,b,a1,b1;
char c,c1;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>a1>>b1>>c1;
	if(a==a1) cout<<1;
	else cout<<0;
	if(a==a1&&b==b1) cout<<1;
	else cout<<0;
	if(a==a1&&b==b1&&((c>='A'&&c<='C'&&c1>='A'&&c1<='C')||(c>='D'&&c<='E'&&c1>='D'&&c1<='E'))) cout<<1;
	else cout<<0;
	if(max(c-c1,c1-c)==1&&a==a1&&b==b1&&((c>='A'&&c<='C'&&c1>='A'&&c1<='C')||(c>='D'&&c<='E'&&c1>='D'&&c1<='E'))) cout<<1;
	else cout<<0;
	return 0;
}
