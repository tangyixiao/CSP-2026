#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	bool a1,a2,a3,a4;
	for(int i=0;i<c1.size();++i){
		if(c1[i]!=c2[i]){
			a1=false;
			break;
		}
		else a1=true;
	}
	if(a1)cout<<1;
	else cout<<0;
	if(s1[0]!=s2[0]||s1[1]!=s2[1])a2=false;
	else a2=true;
	if(a2&&a1)cout<<1;
	else cout<<0;
	if(s1[2]>='A'&&s1[2]<='C'&&s2[2]>='A'&&s2[2]<='C')a3=true;
	else if(s1[2]>='D'&&s1[2]<='F'&&s2[2]>='D'&&s2[2]<='F')a3=true;
	else a3=false;
	if(a3&&a2&&a1)cout<<1;
	else cout<<0;
	if(abs(s1[2]-s2[2])==1)a4=true;
	else a4=false;
	if(a1&&a2&&a3&&a4)cout<<1;
	else cout<<0;
	
	
	return 0;
}
