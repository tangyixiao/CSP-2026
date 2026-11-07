#include<bits/stdc++.h>
using namespace std;
string c,s,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c>>s>>c2>>s2;
	//≥µœ· 
	if(c==c2) cout<<1;
	else{
		cout<<"0000";
		return 0;	
	}
	//≈≈
	bool flag1=1;
	for(int i=0;i<=1;i++)
		if(s[i]!=s2[i])
			flag1=0;
	if(flag1) cout<<1;
	else{
		cout<<"000";
		return 0;
	}
	//Õ¨≤‡ 
	if((s[2]>='D'&&s2[2]>='D')||(s[2]<='C'&&s2[2]<='C')) cout<<1;
	else{
		cout<<"00";
		return 0;
	}
	//∞§◊≈ 
	if(s[2]>='D'&&s2[2]>='D'){
		if(abs(int(s[2])-int(s2[2]))==2)
			cout<<1;
		else cout<<0;
	}else if(s[2]<='C'&&s2[2]<='C'){
		if(abs(int(s[2])-int(s2[2]))==1)
			cout<<1;
		else cout<<0;
	}else{
		cout<<0;	
	}
	return 0; 
}
