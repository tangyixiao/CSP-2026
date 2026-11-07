#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<"1";
		if((s1[0]==s2[0])&&(s1[1]==s2[1])){
			cout<<"1";
			int a=(int)(s1[2]-'A'+1);
			int b=(int)(s2[2]-'A'+1);
			if((a>=1&&a<=3&&b>=1&&b<=3)||(a+b==9)){
				cout<<"1";
				if(a==2||b==2||a+b==9){
					cout<<"1";
				}
				else{
					cout<<"0";
				}
			}
			else{
				cout<<"00";
				return 0;
			}
		}
		else{
			cout<<"000";
			return 0;
		}
	}
	else{
		cout<<"0000";
		return 0;
	}
	return 0;
}
