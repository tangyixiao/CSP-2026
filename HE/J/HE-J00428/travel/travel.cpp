#include<bits/stdc++.h> 
using namespace std;
const int N=2e5+5;
int a,b,c,d;
char e,f;
bool check(char a,char b)
{
	if(a<='C'&&b<='C') 
		return 1;
	if(a>='D'&&b>='D') return 1;
	return 0;
}
int main()
{
	//while(1) rp++;
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>c>>e>>b>>d>>f;
	if(a==b) cout<<1;
	else cout<<0;
	if(a==b&&c==d) cout<<1;
	else cout<<0;
	if(a==b&&c==d&&check(e,f)) cout<<1;
	else cout<<0;
	if(a==b&&c==d&&check(e,f)&&(e==f-1||e==f+1)) cout<<1;
	else cout<<0;
	return 0;
}
