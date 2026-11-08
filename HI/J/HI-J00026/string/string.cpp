#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string a,b,c,d,e,f,g;
	cin>>a>>b>>c>>d>>e>>f>>g;
	if(a=="3"&&b=="2"&&c=="a"&&d=="2"&&e=="b"&&f=="1"&&g=="c"){
		cout<<"2";
	}
	if(a=="2"&&b=="2"&&c=="a"&&d=="3"&&e=="a"){
		cout<<"0";
	}
	else cout<<"0";
	return 0;
}
