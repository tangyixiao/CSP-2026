#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a1,a2;
	string k1,k2;
	cin>>a1>>k1>>a2>>k2;
	if(a1==a2)	cout<<1;
	else{
		cout<<0000;
		return 0;
	}
	int b=0,c=0;
	char x,y;
	for(int i=1;i<=3;i++){
		if(k1[i]>='A' and k1[i]<='Z')	x=k1[i];
		else b=b*10+k1[i];
	}
	for(int i=1;i<=3;i++){
		if(k2[i]>='A' and k2[i]<='Z')	y=k2[i];
		else c=c*10+k2[i];
	}
	if(b==c)	cout<<1;
	else	cout<<0;
	if(x<='C' and y<='C')	cout<<1;
	else if(x>='D' and y>='D')	cout<<1;
	else	cout<<0;
	if(x=='C' and y=='D'){
		cout<<0;
		return 0;
	}
	if(x+1==y || x-1==y)	cout<<1;
	else if(x=='D' and y=='F')	cout<<1;
	else cout<<0;
	return 0;
}
