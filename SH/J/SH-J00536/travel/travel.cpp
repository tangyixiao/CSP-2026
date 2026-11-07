#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string x1,x2,y1,y2;
	cin>>x1>>y1>>x2>>y2;
	if(x1==x2) cout<<1;
	else cout<<0;
	if(x1==x2&&y1[0]==y2[0]&&y1[1]==y2[1]) cout<<1;
	else cout<<0;
	if(x1==x2&&y1[0]==y2[0]&&y1[1]==y2[1]&&(y1[2]<='C'&&y2[2]<='C'||y1[2]>='D'&&y2[2]>='D')) cout<<1;
	else cout<<0;
	if(x1==x2&&y1[0]==y2[0]&&y1[1]==y2[1]&&(y1[2]<='C'&&y2[2]<='C'||y1[2]>='D'&&y2[2]>='D')&&(y1[2]==y2[2]+1||y1[2]==y2[2]-1)) cout<<1;
	else cout<<0;
	return 0;
}
