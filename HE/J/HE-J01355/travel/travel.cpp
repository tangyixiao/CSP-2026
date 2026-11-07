#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}else{
		cout<<1;
		string u = s1.substr(0,2);
		string v = s2.substr(0,2);
		if(u!=v){
			cout<<"000";
			return 0;
		}else{
			cout<<1;
			string a = s1.substr(2,1);
			string b = s2.substr(2,1);
			if((a[0]<='C'&&b[0]<='C')||(a[0]>='D'&&b[0]>='D')){
				cout<<1;
				if((a[0]>='D'&&b[0]>='D') || (a[0]-b[0]==1 || a[0]-b[0]==-1)){
					cout<<1;
				}else{
					cout<<0;
				}
			}else{
				cout<<"00";
				return 0;
			}
		}
	}
	return 0;
}
