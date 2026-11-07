#include<bits/stdc++.h>
using namespace std;

string c, s, cx, sx;
bool check(){
	if(s[2]=='F'||s[2]=='D'){
		if(sx[2]=='F'||sx[2]=='D') return 1;
		return 0;
	}
	else{
		if(sx[2]=='F'||sx[2]=='D') return 0;
		return 1;
	}
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c>>s>>cx>>sx;
	int fl=0;
	if(c==cx) fl=1;
	cout<<fl;
	int f=1;
	for(int i=0;i<2;i++) if(s[i]!=sx[i]) f=0;
	if(!fl) f=0;
	cout<<f;
	if(f==1&&check()) cout<<1;
	else cout<<0;
	if(f==1&&abs(sx[2]-s[2])==1&&check()) cout<<1;
	else cout<<0;
	return 0;
}