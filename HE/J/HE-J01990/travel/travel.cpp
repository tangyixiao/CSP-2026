#include<bits/stdc++.h>
#define int long long
using namespace std;
bool f1,f2,f3,f4;
string c1,s1,c2,s2;
char b1,b2;
int a1,a2;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	a1=(s1[0]-48)*10+(s1[1]-48);
	a2=(s2[0]-48)*10+(s2[1]-48);
	b1=s1[2],b2=s2[2];
//	cout<<b1<<" "<<b2<<endl;
	if(c1==c2){
		if(a1==a2){
			if((b1<='C'&&b2<='C')||(b1>='D'&&b2>='D')){
				if(((b1=='A'||b1=='C')&&b2=='B')||(b1=='B'&&(b2=='A'||b2=='C'))||(b1=='D'&&b2=='F')||(b1=='F'&&b2=='D')){
					cout<<"1111";
				}else{
					cout<<"1110";
				}
			}else{
				cout<<"1100";
			}
		}else{
			cout<<"1000";
			return 0;
		}
	}else{
		cout<<"0000";return 0;
	}
	
	
	
	return 0;
}
