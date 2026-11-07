#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int x1,t1;
bool f1,f2,f3;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	
	if(c1==c2){
		printf("1");
		f1=true;
	}else{
		printf("0");
	}
	if(f1){
	string x=s1.substr(0,2);
	string y=s2.substr(0,2);
		if(x==y){
			f2=true;
			printf("1");
		}else{
			printf("0");
		}
	}else{printf("0");}
		if(f2){
		if(((s1[2]=='F' || s1[2]=='D') && (s2[2]!='A' && s2[2] !='B' && s2[2]!='C') ) || ((s2[2]=='F' || s2[2]=='D') && (s1[2]!='A' && s1[2] !='B' && s1[2]!='C'))
			 || ((s1[2]=='A' || s1[2]=='B' || s1[2]=='C') && (s2[2]!='F' && s2[2]!='D')) || ((s2[2]=='A' || s2[2]=='B' || s2[2]=='C') && (s1[2]!='F' && s1[2]!='D')))	{
				f3=true;
			printf("1");
			}else{
				printf("0");
				
			}
		}else{printf("0");}
	if(f3){
		if(s1[2]>s2[2]){
			if(s1[2]-s2[2]==1){
				printf("1");
			}else{
				printf("0");
			}
		}else{
			if(s2[2]-s1[2]==1){
				printf("1");
			}else{
				printf("0");
			}
		}
	}else{printf("0");}
return 0;
}
