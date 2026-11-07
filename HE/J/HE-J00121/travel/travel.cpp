#include<bits/stdc++.h>
using namespace std;
string a,c;
int a1,b1,c1,d1;
char b,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>c>>a1>>b1>>b;
	cin>>c1>>d1>>d;
	if(a==c)cout<<1;
	else cout<<0;
	if(a==c&&a1==c1&&b1==d1)cout<<1;
	else cout<<0;
	if(a==c&&a1==c1&&b1==d1&&(b==d||(b=='A'&&d=='B')||(b=='A'&&d=='C')||(b=='C'&&d=='B')||(b=='B'&&d=='A')||(b=='C'&&d=='A')||(b=='B'&&d=='C')||(b=='D'&&d=='F')||(b=='F'&&d=='D')))cout<<1;
	else cout<<0;
	if(a==c&&a1==c1&&b1==d1&&(b==d||(b=='A'&&d=='B')||(b=='C'&&d=='B')||(b=='B'&&d=='A')||(b=='B'&&d=='C')||(b=='D'&&d=='F')||(b=='F'&&d=='D')))cout<<1;
	else cout<<0;
	return 0;
}
