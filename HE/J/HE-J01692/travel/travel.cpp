#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	int f=0;
	if(c1==c2){
		f=1;
		cout<<1;
	}else cout<<0;
	int f1=0;
	if(f==1&&s1[0]==s2[0]&&s1[1]==s2[1]){
		f1=1;
		cout<<1;
	}else cout<<0;
	int f2=0;
	if(f1==1&&s1[2]<='C'&&s2[2]<='C'||s1[2]>='D'&&s2[2]>='D'){
		f2=1;
		cout<<1;
	}else cout<<0;
	if(f2==1){
		if(s1[2]==char(s2[2]+1)||s1[2]==char(s2[2]-1)) cout<<1;
		else cout<<0;
	}else cout<<0;
	return 0;
}
