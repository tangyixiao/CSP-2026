#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a1,a2,b1,b2;
	cin>>a1>>a2>>b1>>b2;
	string s="0000";
	if(a1==b1){
		s[0]='1';
		if(a2[0]==b2[0] && a2[1]==b2[1]){
			s[1]='1'; 
			if((a2[2]<='C' && b2[2]<='C') || (a2[2]>='D' && b2[2]>='D')){
				s[2]='1';
				int a=int(a2[2]-b2[2]);
				if((a==-1 && a2[2]!='C' && b2[2]!='D') || (a==1 && a2[2]!='D' && b2[2]!='C') || (a2[2]=='D' && b2[2]=='F') || (a2[2]=='F' && b2[2]=='D')){
					s[3]='1';
				}
			}
		}
	}
	cout<<s<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
