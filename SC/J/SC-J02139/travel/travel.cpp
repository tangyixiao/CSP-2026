#include<bits/stdc++.h>
using namespace std;
int c1,c2,a1=0,a2=0,a3=0,a4=0;
string s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		a1=1;
		if(s1[0]==s2[0] && s1[1]==s2[1]){
			a2=1;
			if((s1[2]>='A' && s1[2]<='C' && s2[2]>='A' && s2[2]<='C' ) 
			|| (s1[2]>='D' && s1[2]<='F' && s2[2]>='D' && s2[2]<='F' )){
				a3=1;
				if(s1[2]-'A'+1==s2[2]-'A' || s1[2]-'A'-1==s2[2]-'A')
					a4=1;
			}
				
		}
	}
	cout<<a1<<a2<<a3<<a4;
	fclose(stdin);
	fclose(stdout);
	return 0;
}