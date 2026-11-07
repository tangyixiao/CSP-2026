#include<bits/stdc++.h>
//define int long long
using namespace std;
int a,b,c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) a=1;
	if(a==1&&s1[0]==s2[0]&&s1[1]==s2[1]){
		b=1;
	}
	if(b==1){
		if(s1[2]>'C'&&s2[2]>'C'||s1[2]<='C'&&s2[2]<='C'){
			c=1;
		}
	}
	if(c==1){
		if(s1[2]-s2[2]==1||s2[2]-s1[2]==1||(s1[2]=='D'&&s2[2]=='F')||(s2[2]=='D'&&s1[2]=='F')){
			d=1;
		}
	}
	cout<<a<<b<<c<<d;
	return 0;
} 
/*

是否在同一节车厢；
是否在同一节车厢的同一排；
是否在同一节车厢的同一排，且位于过道的同一侧；
是否相邻。

*/