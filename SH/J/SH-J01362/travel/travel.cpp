#include <bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	char s11=s1[0],s12=s1[1],s13=s1[2],s21=s2[0],s22=s2[1],s23=s2[2];
	if(c1==c2){
		cout<<1;
		if(s11==s21&&s12==s22){
			cout<<1;
			if((s13<='C'&&s23<='C')||(s13>='D'&&s23>='D')){
				cout<<1;
				if(s13>='D'||s13=='B'||s23=='B'){
					cout<<1;
				}else cout<<0;
			}else cout<<"00";
		}else cout<<"000";
	}else cout<<"0000"; 
	fclose(stdin);
	fclose(stdout);
	return 0;
}
