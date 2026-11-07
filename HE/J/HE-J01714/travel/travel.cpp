#include<bits/stdc++.h>
using namespace std;
string tmp1,tmp2;
	string ans;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	bool a=0,b=0,c=0,d=0;
	cin>>c1>>s1>>c2>>s2;

//	scanf("%c,%c,%c,%c",&c1,s1,c2,s2)
	tmp1+=s1[0]+s1[1];
	tmp2+=s2[0]+s2[1];
	if(1){
	
	if((c1[0]==c2[0])&&c1[1]==c2[1]){
	
		ans+='1';
		b=1;
	}
	else
		ans+='0';
}	
	if(1){
		if(b&&tmp1==tmp2){
		ans+='1';
		c=1;
		}
		else ans+='0';	
	}
	
	if(1){
		if(c&&b&&(s1[2]>='D'&&s2[2]>='D'||s1[2]<'D'&&s2[2]<'D')){
			ans+='1';	
			a=1;
		}
		else{
			ans+='0';
		}	
	} 
	
	if(1){
		if(c&&a&&abs(int(s1[2])-int(s2[2]))==1){
		ans+='1';
	}
	else{
		ans+='0';
	}
	
	}
	cout<<ans;
	return 0;
} 
