#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0); 
	
	string x1,x2,z1,z2;
	cin>>x1>>z1>>x2>>z2;
	int numx1=(x1[0]-'0')*10+x1[1]-'0',numx2=(x2[0]-'0')*10+x2[1]-'0',numz1=(z1[0]-'0')*10+z1[1]-'0',numz2=(z2[0]-'0')*10+z2[1]-'0';
	char zw1=z1[2],zw2=z2[2];
	if(numx1==numx2)cout<<"1";
	else cout<<"0";
	if(numx1==numx2&&numz1==numz2)cout<<"1";
	else cout<<"0";
	if(numx1==numx2&&numz1==numz2&&((zw1<='C'&&zw1>='A'&&zw2<='C'&&zw2>='A')||((zw1=='F'||zw1=='D')&&(zw2=='F'&&zw2=='D'))))cout<<"1";
	else cout<<"0";
	if(numx1==numx2&&numz1==numz2&&((zw1<='C'&&zw1>='A'&&zw2<='C'&&zw2>='A')||((zw1=='F'||zw1=='D')&&(zw2=='F'&&zw2=='D')))&&(((zw1=='F'||zw1=='D')&&(zw2=='F'&&zw2=='D'))||(zw2+1==zw1||zw2-1==zw1)))cout<<"1";
	else cout<<"0";
	return 0;
} 