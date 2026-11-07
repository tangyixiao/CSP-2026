#include<iostream>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2,m=0;
	char q,w;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	q=max(s1[2],s2[2]);
	w=min(s1[2],s2[2]);
	m=q-w;
	if(c1==c2){
		if(s1[0]==s2[0] && s1[1]==s2[1]){
			if(s1[1]<='C'&& s2[2]>'C'){
				cout<<"1100"<<endl;
				return 0;
			}else if(s1[2]>'C' && s2[2]<='C'){
				cout<<"1100"<<endl;
				return 0;
			}else{
				if(m<=1){
					cout<<"1111"<<endl;
				}else{
					cout<<"1110"<<endl;
					return 0;
				}
			}
		}else{
			cout<<"1000"<<endl;
			return 0;
		}
	}else{
		cout<<"0000"<<endl;
		return 0;
	}
	return 0;
}
