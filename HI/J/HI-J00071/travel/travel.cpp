#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
		bool f=1;
		char a,b;
		for(int i=0;i<s1.size();i++){
			if(s1[i]>='0'&&s1[i]<='9'&&s2[i]>='0'&&s2[i]<='9'){
				if(s1[i]!=s2[i]){
					f=0;
				}
			}
			else{
				a=s1[i];
				b=s2[i];
			}
		}
		if(f==1){
			cout<<1;
			if((a<='C'&&a>='A'&&b<='C'&&b>='A')||(a<='F'&&a>='D'&&b<='F'&&b>='D')){
				cout<<1;
				if(abs(a-b)==1){
					cout<<1;
				}
				else{
					cout<<0;
				}
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
	
	return 0;
}
