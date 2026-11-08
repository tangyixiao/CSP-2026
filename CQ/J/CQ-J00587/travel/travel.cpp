#include<iostream>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(nullptr);
	int c1,s1;
	char c2[3],s2[3];
	cin>>c1;
	char a;
	for(int i=0;i<3;++i) cin>>c2[i]; 
	cin>>s1;
	for(int i=0;i<3;++i) cin>>s2[i];
	if(c1==s1){
		cout<<"1";
		int x=c2[0]*10+c2[1],y=s2[0]*10+s2[1];
		if(x==y){
			cout<<"1";
			if((c2[2]>'C'&&s2[2]<='C')||(c2[2]<='C'&&s2[2]>'C')){
				cout<<"00";
			}else{
				cout<<"1";
				if(s2[2]+1==c2[2]||c2[2]+1==s2[2]) {
					cout<<"1\n";
				}else{
					cout<<"0\n";
				}
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	return 0;}
