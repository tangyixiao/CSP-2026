#include <bits/stdc++.h> 
using namespace std;
int main (){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a[10];
	string b[4];
	string c[10];
	string d[4];
	cin>>a>>b>>c>>d;
	if(c==a&&a!="1"&&a!="16"){
		cout<<1;
		if(d[0]==b[0]&&d[1]==b[1]){
			cout<<1;
			if(b[2]<='C'&&d[2]<='C'||b[2]>='D'&&d[2]>='D'){
				cout<<1;
				if(b[2]-d[2]==1&&d[2]-b[2]==1){
					cout<<1;
				}else{
					cout<<0;
				}
			}else{
				cout<<00;
			}
		}else{
			cout<<000;
		}
	}else{
		cout<<0000;
	}
	return 0;
}
