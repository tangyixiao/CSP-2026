#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll c1,c2,sa1,sa2;
string s1,s2;
char ch1,ch2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	sa1=(s1[0]-48)*10+s1[1]-48;
	sa2=(s2[0]-48)*10+s2[1]-48;
	ch1=s1[2];ch2=s2[2];
//	cout<<c1<<' '<<sa1<<' '<<ch1<<endl<<c2<<' '<<sa2<<' '<<ch2<<"\n";
	if(c1==c2) cout<<"1";
	else{
		cout<<"0000";
		return 0;
	}
	if(sa1==sa2) cout<<"1";
	else{
		cout<<"000";
		return 0;
	}
	if((ch1>'C' && ch2>'C')||(ch1<='C' && ch2<='C')) cout<<"1";
	else{
		cout<<"00";
		return 0;
	}
	if(abs(ch1-ch2)==1) cout<<"1";
	else cout<<"0";
	return 0;
} 
