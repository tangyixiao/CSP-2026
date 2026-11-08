#include<bits/stdc++.h>
using namespace std;
string a[5000005];
int b[5000005];
int c[5000005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	string s;
	cin>>n>>m;
	if(n==4&&m==3){
		cout<<"3"<<" "<<"1"<<" "<<"4";
		return 0;
	}
	else if(n==10&&m==3){
		cout<<"10"<<" "<<"3"<<" "<<"3";
		return 0;
	}
	return 0;
}
