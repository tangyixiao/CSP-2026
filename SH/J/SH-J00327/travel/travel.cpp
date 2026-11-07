#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	int m1=(int)(s1[0]-48)*10+(int)(s1[1]-48);
	int m2=(int)(s2[0]-48)*10+(int)(s2[1]-48);
	if(c1==c2)cout<<1;
	else cout<<0;
	if(c1==c2&&m1==m2)cout<<1;
	else cout<<0;
	if(c1==c2&&m1==m2&&(s1[2]<='C'&&s2[2]<='C')||(s1[2]>='D'&&s2[2]>='D')){
		cout<<1;
	}
	else cout<<0;
	if(s1[2]=='C'&&s2[2]=='D'||s1[2]=='D'&&s2[2]=='C')cout<<0;
	else if(m1==m2&&(s1[2]==s2[2]-1||s1[2]==s2[2]+1)&&c1==c2){
		cout<<1;
	}
	else cout<<0;
	return 0;
}
