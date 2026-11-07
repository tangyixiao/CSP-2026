#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string c1,s1,c2,s2;
ll d=0;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
		d++;
	}
	else cout<<0;
	if(s1[0]==s2[0]&&s1[1]==s2[1]&&d==1){
	cout<<1;
	d++;
	}
	else cout<<0;
	if(s1[2]>='A'&&s1[2]<='C'&&s2[2]>='A'&&s2[2]<='C'&&d==2){
		cout<<1;
		d++;
	}else if(s1[2]>='D'&&s1[2]<='F'&&s2[2]>='D'&&s2[2]<='F'&&d==2){
		cout<<1;
		d++;
	}else cout<<0;
	if(d==3){
		if(s1[2]-s2[2]!=-2&&s1[2]-s2[2]!=2){
		cout<<1;
		}else if(s1[2]>='D'&&s1[2]<='F'&&s2[2]>='D'&&s2[2]<='F')cout<<1;
	else cout<<0;
	}else cout<<0;
	return 0;
} 
