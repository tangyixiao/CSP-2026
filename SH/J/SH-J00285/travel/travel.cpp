#include<bits/stdc++.h>
using namespace std;
char a,b,c,d,e,f,g,h,i,j;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j;
	if(a==f&&b==g){
		cout<<1;
		if(c==h&&d==i){
			cout<<1;
			if(e<='C'&&j<='C'){
				cout<<1;
				if(e-'A'+1==j-'A'||e-'A'==j-'A'+1){
					cout<<1;
				}
				else{
					cout<<0;
				}
			}
			else if(e>'c'&&j>'C'){
				cout<<"11";
			}
			else{
				cout<<"00";
			}
		}
		else{
			cout<<"000";
		}
	}
	else{
		cout<<"0000";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
