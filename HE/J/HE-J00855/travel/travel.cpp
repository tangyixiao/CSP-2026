#include<iostream>
#include<string>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdin);
	int a1=0,a2=0,a3=0,a4=0;
	string c1,c2,s1,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		a1=1;
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			a2=1;
			if(s1[2]=='A'){
				if(s2[2]=='B'){
					a3=1;a4=1;
				}else if(s2[2]=='C') a3=1;
			}
			else if(s1[2]=='B'){
				if(s2[2]=='A'||s2[2]=='C'){
					a3=1;a4=1;
				}
			}
			else if(s1[2]=='C'){
				if(s2[2]=='B'){
					a3=1;a4=1;
				}else if(s2[2]=='A') a3=1;
			}
			else if(s1[2]=='D'){
				if(s2[2]=='F') {
					a3=1;a4=1;
				}
			}
			else if(s1[2]=='F'){
				if(s2[2]=='D') {
					a3=1;a4=1;
				}
			}
		}
	} 
	cout<<a1<<a2<<a3<<a4;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
