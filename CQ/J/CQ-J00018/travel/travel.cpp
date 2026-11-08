#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
string c1,s1,c2,s2;
int flag;
int flag2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>c1>>s1>>c2>>s2;
	
	if(c1!=c2){cout<<"0000";return 0;}
	else if(c1==c2){cout<<1;}
	//2
	if(s1[0]==s2[0]&&s1[1]==s2[1]){cout<<1;flag=1;}
	else if(s1[0]!=s2[0]||s1[1]!=s2[1]){cout<<0;
	}
	//3
	if(flag==1&&s1[2]>='A'&&s1[2]<='C'&&s2[2]>='A'&&s2[2]<='C'||
	flag==1&&s1[2]>='D'&&s1[2]<='F'&&s2[2]>='D'&&s2[2]<='F'){cout<<1;flag2=2;}
	else cout<<0;
	//4
//	cout<<flag2<<"ggg";
	if(flag2==2){
		if((s1[2]=='A'&&s2[2]=='B')||(s1[2]=='B'&&s2[2]=='A'||s2[2]=='C')||
		s1[2]=='C'&&s2[2]=='B'||s1[2]>='D'&&s1[2]<='F'&&s2[2]>='D'&&s2[2]<='F'){
		cout<<1;
		}else cout<<0;
	}else if(flag2!=2)cout<<0;	

	return 0;
}
