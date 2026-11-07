#include<bits/stdc++.h>
using namespace std;
char s1,s2;
int a,b,c,d,e,f;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>s1>>c>>d>>s2;
	e=s1-'A'+1;
	f=s2-'A'+1;
	if(a==c){
		cout<<1;
		if(b==d){
			cout<<1;
			if((e<=3&&f<=3)||(e>3&&f>3)){
				cout<<1;
				if(abs(e-f)==1){
					cout<<1;
				}else{
					cout<<0;
				}
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	return 0;
}
