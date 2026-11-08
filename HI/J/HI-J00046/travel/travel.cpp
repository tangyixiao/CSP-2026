#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	int a1=s1[2],a2=s2[2],n=0;
	if(c1==c2){
		n++;
		cout<<1;
	}
	else
		cout<<0;
	
	if(n==1&&s1[0]==s2[0]&&s1[1]==s2[1]){ 
		n++;
		cout<<1;
	} 
	else
		cout<<0;
	
	if(n==2&&((s1[2]>='A'||s1[2]<='E')&&(s2[2]>='A'||s2[2]<='E'))&&(((s1[2]!='C'&&s2[2]!='D')&&(s1[2]!='D'&&s2[2]!='C')))){
		n++;
		cout<<1;
	}
	else
		cout<<0;
	if(n==3&&(a1+1==a2||a1-1==a2)){		
		cout<<1;
	}else
		cout<<0;
	
	return 0;
	
}
