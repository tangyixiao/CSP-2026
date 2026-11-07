#include<bits/stdc++.h>
using namespace std;
string c1,c2,c3,c4;
bool b1,b2,b3,b4,b5,b6;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>c2>>c3>>c4;
	b6=c1==c3;//同车 
	b1=c2[1]==c4[1];//同列 
	b2=c2[2]>='A'&&c2[2]<='C'&&c4[2]>='A'&&c4[2]<='C';//同侧1 
	b3=c2[2]>='D'&&c2[2]<='F'&&c4[2]>='D'&&c4[2]<='F';//同侧2 
	b4=c2[2]==c4[2]+1||c2[2]==c4[2]-1;//相邻1 
	b5=c2[2]==c4[2]-2||c2[2]==c4[2]+2;//相邻2 
	if(b6)cout<<1;
	else cout<<0;
	if(b1&&b6)cout<<1;
	else cout<<0;
	if(b6&&b1&&b2)cout<<1;
	else if(b6&&b1&&b3) cout<<1;
	else cout<<0;
	if(b6&&b1&&b2&&b4) cout<<1;
	else if(b6&&b1&&b3&&b5) cout<<1;
	else cout<<0;
} 
