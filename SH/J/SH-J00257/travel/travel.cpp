#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string t1,t2,s1,s2;
	cin>>t1>>s1>>t2>>s2;
	if(t1!=t2){
		cout<<"0000"<<endl;
	}
	else{
		cout<<'1';
		if((s1[0]!=s2[0])||(s1[1]!=s2[1])){
			cout<<"000"<<endl;
		}
		else{
			cout<<'1';
			if((s1[2]-'A'<3)^(s2[2]-'A'<3)){
				cout<<"00"<<endl;
			}
			else{
				cout<<'1';
				if((s1[2]-'A'<3)&&(s2[2]-'A'<3)){
					if(abs(s1[2]-s2[2])==1){
						cout<<"1"<<endl;
					}
					else cout<<"0"<<endl;
				}
				else{
					cout<<"1"<<endl;
				}
			}
		}
	}
	return 0;
}
