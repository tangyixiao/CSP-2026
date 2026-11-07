#include <bits/stdc++.h>
using namespace std;
string a,b;
int a1,b1;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>a1>>a>>b1>>b;
	if(a1==b1) cout<<1;
	else cout<<0;
	if((a[0]+a[1]==b[0]+b[1])&&a1==b1) cout<<1;
	else cout<<0;
	if((a[0]+a[1]==b[0]+b[1])&&((a[2]<='C'&&b[2]<='C')||(a[2]>='D'&&b[2]>='D'))&&a1==b1) cout<<1;
	else cout<<0;
	if(((a[0]+a[1]==b[0]+b[1])&&abs(int(a[2])-int(b[2]))==1&&((a[2]<='C'&&b[2]<='C')||(a[2]>='D'&&b[2]>='D'))&&a1==b1)||((a[0]+a[1]!=b[0]+b[1])&&a1==b1&&a[2]==b[2]))  cout<<1;
	else cout<<0;
	return 0;
}