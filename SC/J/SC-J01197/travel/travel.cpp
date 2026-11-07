#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2,s;
int k;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		s+='1';
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			s+='1';
			if((s1[2]<='C'&&s2[2]<='C'&&s1[2]>='A'&&s2[2]>='A')||(s1[2]<='F'&&s1[2]>='D'&&s2[2]<='F'&&s2[2]>='D')){
				s+='1';
				if(s1[2]<='F'&&s1[2]>='D'){
					s+='1';
				}else{
					if(s1[2]-s2[2]==1||s2[2]-s1[2]==1){
						s+='1';
					}else{
						k=1;
					}
				}
			}else{
				k=2;
			}
		}else{
			k=3;
		}
	}else{
		k=4;
	}
	cout<<s;
	for(int i=1;i<=k;i++){
		cout<<'0';
	}
	return 0;
} 