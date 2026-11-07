#include <iostream>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1>>s1>>c2>>s2;
	if(c1==c2) {
		cout<<1;
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			cout<<1;
			int n1=s1[2],n2=s2[2];
			if(min(n1,n2)>='D'||max(n1,n2)<='C'){
				cout<<1;
				if((abs(n1-n2)==1&&n1!='C'&&n2!='C')||(abs(n1-n2)==2&&(n1=='F'||n2=='F'))){
					cout<<1;
				}else cout<< 0;
			}else cout<<"00";
		}else cout<<"000";
	}else cout<<"0000";
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}