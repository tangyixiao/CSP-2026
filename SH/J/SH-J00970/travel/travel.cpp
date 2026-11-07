#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	ll paishu1=(ll)(s1[0]*10)+(ll)s1[1];
	ll paishu2=(ll)(s2[0]*10)+(ll)s2[1];
	bool b1,b2;
	int sv1=s1[2]-'A'+1;
	int sv2=s2[2]-'A'+1;
	if(s1[2]=='F'||s1[2]=='D'){
		b1=0;
	}
	else{
		b1=1;
	}
	if(s2[2]=='F'||s2[2]=='D'){
		b2=0;
	}
	else{
		b2=1;
	}	
	if(c1==c2){
		printf("1");
		if(paishu1==paishu2){
			printf("1");
			
			if(b1==b2){
				printf("1");
				if(abs(sv1-sv2)==1){
					printf("1");
				}
				else{
					printf("0");
				}
			}
			else{
				printf("00");
			}
		}else{
			printf("000");
		}
	}
	else{
		printf("0000");
	}
	return 0;
} 
