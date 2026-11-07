#include<iostream>
#include<cstring>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	int c3=0,c4=0,s3=0,s4=0;
	char z1,z2,z3;
	cin>>c1>>s1>>c2>>s2;
	for(int i=0;i<2;i++){
		c3=c3*10+(c1[i]-'0');
		c4=c4*10+(c2[i]-'0');
		s3=s3*10+(s1[i]-'0');
		s4=s4*10+(s2[i]-'0');
	}
	z1=s1[2];
	z2=s2[2];
	if(z1-'A'>z2-'A'){
		z3=z1;
		z1=z2;
		z2=z1;
	}
	
	if(c3==c4){
		cout<<"1";
		if(s3==s4){
			cout<<"1";
			if(z1-'A'<3 && z2-'A'>=3){
				cout<<"00";
			}else{
				cout<<"1";
				if(z1+1==z2){
					cout<<"1";
				}else{
					cout<<"0";
				}		
			}
		
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 