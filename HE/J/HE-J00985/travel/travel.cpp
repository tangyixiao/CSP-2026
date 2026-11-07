#include<bits/stdc++.h>
using namespace std;
int c1,c2,a1,a2,b1,b2;
string s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	a1=(s1[0]-'0')+(s1[1]-'0');
	b1=s1[2]-'A';
	a2=(s2[0]-'0')+(s2[1]-'0');
	b2=s2[2]-'A'; 
	if(c1!=c2){
		cout<<"0000"<<endl;
		return 0;
	}else{
		if(a1!=a2){
			cout<<"1000"<<endl;
			return 0;
		}else{
			if((b1>=0&&b1<=2 && b2>=3&&b2<=4)||(b2>=0&&b2<=2 && b1>=3&&b1<=4)){
				cout<<"1100"<<endl;
				return 0;
			}else{
				if(((b1-b2==-1)||(b1-b2==1))&&((b1!=2&&b2!=3)||(b1!=3&&b2!=2))){
					cout<<"1111"<<endl;
					return 0;
				}else{
					cout<<"1110"<<endl;
					return 0;
				}
			}
		}
	}
	return 0;
} 
