#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	char a[13]={};
	cin>>a;
	//int Rx=(a[0]-74)*10+(a[1]-74),Xx=(a[7]-74)*10+(a[8]-74),Rb=(a[3]-74)*10+(a[4]-74),Xb=(a[10]-74)*10+(a[11]-74);
	//int Rx=int(a[0])*10+int(a[1]),Xx=int(a[7])*10+int(a[0]),Rb=int(a[3])*10+int(a[0]),Xb=int(a[10])*10+int(a[11]);
	char Rz=a[5],Xz=a[12];
	if(a[0]==a[7]&&a[1]==a[8])cout<<1;
	if((a[0]==a[7]&&a[1]==a[8])&&(a[3]==a[10]&&a[4]==a[11]))cout<<1;
	if(Rz<='C'&&Xz<='C')cout<<1;
	else if(((a[0]==a[7]&&a[1]==a[8])&&(a[3]==a[10]&&a[4]==a[11]))&&(Rz>='F'&&Xz>='F'))cout<<1;
	else cout<<0;
	if(Rz+1==Xz||Xz-1==Xz)cout<<1;
	else if(Rz==Xz&&((a[3]+1==a[10])||(a[4]+1==a[11])))cout<<1;
	else cout<<0;
} 