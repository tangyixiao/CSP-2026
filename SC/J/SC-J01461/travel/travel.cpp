#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel","r",stdin);
	freopen("travel","w",stdout);
	int c1,c2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	//同车厢 
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	cout<<1;
	//同排
	int a1=s1[0]*10+s1[1],a2=s2[0]*10+s2[1];
	if(a1!=a2){
		cout<<"000";
		return 0;
	} 
	cout<<1;
	//同侧
	int f1,f2;
	if(s1[2]<='C') f1=1;
	else f1=0;
	 if(s2[2]<='C') f2=1;
	else f2=0;
	if(f1!=f2){
		cout<<"00";
		return 0;
	}
	cout<<1;
	//相邻
	char x=s1[2],y=s2[2],z=max(x,y);
	if(abs(x-y)==1 && z!='D') cout<<"1";
	else cout<<"0"; 
	return 0;
}