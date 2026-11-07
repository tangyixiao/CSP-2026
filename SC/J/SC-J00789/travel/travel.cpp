#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	bool a1,a2,a3,a4;
	if(c1==c2){
		a1=1;
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			a2=1;
			if((s1[2]>='D')==(s2[2]>='D')){
				a3=1;
				if(abs(s1[2]-s2[2])==1) a4=1;
				else a4=0;
			}
			else a3=a4=0;
		}
		else a2=a3=a4=0;
	} 
	else a1=a2=a3=a4=0;
	cout<<a1<<a2<<a3<<a4; 
	return 0;
} 