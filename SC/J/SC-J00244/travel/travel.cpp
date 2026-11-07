#include<bits/stdc++.h>
using namespace std;

string c1,s1,c2,s2;
string ku,no;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){ 
		cout<<"1";
		ku=s1.substr(0,2);
		no=s2.substr(0,2);
		if(ku==no){
			cout<<"1";
			ku=s1[2];
			no=s2[2];
			if((ku>="A" && ku<="C" && no>="A" && no<="C") || (ku>="D" && ku<="F" && no>="D" && no<="F")){
				cout<<"1";
				int r=s1[2]-'A'+1,x=s2[2]-'A'+1;
				if(r+x==9){
					cout<<"1\n";
				}
				else if(min(r,x)>=1 && max(r,x)<=3){
					if(abs(r-x)==1) cout<<"1\n";
					else cout<<"0\n";
				}
				else cout<<"0\n";
			}
			else cout<<"00\n";
		}
		else cout<<"000\n";
	}
	else cout<<"0000\n";
	return 0;
}