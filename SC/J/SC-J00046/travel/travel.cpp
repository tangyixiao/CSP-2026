#include<iostream>
#include<cstring>
using namespace std;
int c[7];
string s1;
string s2;
int tamp1[7];
char tamp2[7];
char a,b;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c[0]>>s1>>c[1]>>s2;
	tamp1[0]=s1[0]+s1[1];
	tamp1[1]=s2[0]+s2[1];
	tamp2[0]=s1[2];
	tamp2[1]=s2[2];
	if(c[0]==c[1]){
		cout<<"1";
		if(tamp1[0]==tamp1[1]){
			cout<<"1";
			if((tamp2[0]<='C'&&tamp2[1]<='C')||(tamp2[0]>='D'&&tamp2[1]>='D')){
				cout<<"1";
				if(tamp2[0]+1==tamp2[1]||tamp2[1]+1==tamp2[0]){
					cout<<"1";
				}else cout<<"0";
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";

	return 0;
}