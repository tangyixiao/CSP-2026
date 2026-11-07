#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	bool flag1=0,flag2=0,flag3=0,flag4=0;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		flag1=1;
		if(s1.substr(0,2)==s2.substr(0,2)){
			flag2=1;
			if(s1[2]>='A'&&s1[2]<='C'&&s2[2]>='A'&&s2[2]<='C'||s1[2]>='D'&&s1[2]<='E'&&s2[2]>='D'&&s2[2]<='E'){
				flag3=1;
				if(!(s1[2]=='A'&&s2[2]=='C'||s1[2]=='C'&&s2[2]=='A')){
					flag4=1;
				}
			}
		}
	}
	cout<<flag1<<flag2<<flag3<<flag4;
	return 0;
} 
