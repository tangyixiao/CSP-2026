#include<bits/stdc++.h>
using namespace std;
bool f(string x,string y){
	if(x[0]!=y[0]) return false;
	else if(x[1]!=y[1]) return false;
	return true;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s1,s2,c1,c2;
	cin>>c1>>s1>>c2>>s2;
	int a=0,b=0;
	if(!f(c1,c2)) {
		cout<<"0000"<<endl;
		return 0;
	}else{
		cout<<1;
		a+=s1[0]*10+s1[1];
		b+=s2[0]*10+s2[1];
		if(a==b) {
			cout<<1;
			if((s1[2]<='C'&&s2[2]<='C')||(s1[2]>='D'&&s2[2]>='D')) {
				cout<<1;
				if(abs(s1[2]-s2[2])==1) cout<<1;
				else cout<<0;
			}
		else cout<<"00";
		}
		else cout<<"000";
		
	}
	return 0;
} 