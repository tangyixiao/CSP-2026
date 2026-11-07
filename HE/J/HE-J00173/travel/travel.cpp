#include <bits/stdc++.h>
using namespace std;
const long long N=1e5+10;
string s1,s2,s3,s4;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>s2>>s3>>s4;
	if(s1!=s3){
		cout<<"0000"<<endl;
		return 0;
	}
	cout<<"1";
	if(s2[0]!=s4[0]||s2[1]!=s4[1]){
		cout<<"000"<<endl;
		return 0;
	}
	cout<<"1";
	if((s2[2]>='A'&&s2[2]<='C'&&s4[2]>='D'&&s4[2]<='F')||(s2[2]>='D'&&s2[2]<='F'&&s4[2]>='A'&&s4[2]<='C')){
		cout<<"00"<<endl;
		return 0;
	}
	cout<<"1";
	if(abs(s2[2]-s4[2])!=1){
		cout<<"0"<<endl;
		return 0;
	}
	cout<<"1"<<endl;
	return 0;
}
