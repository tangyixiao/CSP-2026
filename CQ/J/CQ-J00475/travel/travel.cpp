#include<bits/stdc++.h>
using namespace std;
string p1,p2,q1,q2;
int a1,a2,a3,b1,b2,b3;
int S(char c){
	return (c-'0');
}
bool ans[10];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>p1>>p2>>q1>>q2;
	a1=S(p1[0])*10+S(p1[1]);
	a2=S(p2[0])*10+S(p2[1]);
	a3=p2[2]-'A';
	b1=S(q1[0])*10+S(q1[1]);
	b2=S(q2[0])*10+S(q2[1]);
	b3=q2[2]-'A';
	for(int i=1;i<=4;i++){
		if(i==1)ans[i]=(a1==b1);
		if(i==2)ans[i]=(ans[i-1]&(a2==b2));
		if(i==3)ans[i]=(ans[i-1]&((a3<=2)==(b3<=2)));
		if(i==4)ans[i]=(ans[i-1]&(abs(a3-b3)==1));
	}
	for(int i=1;i<=4;i++)cout<<ans[i];
	cout<<'\n'; 
	return 0;
}
