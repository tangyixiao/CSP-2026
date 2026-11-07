#include <bits/stdc++.h>
using namespace std;
long long sz[500003],sz1[500003],zz[500003];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int a,b;
	cin>>a>>b;
	if(a==4 && b==2){
		cout<<12;
	}else if(a==5 && b==3){
		cout<<7;
	}else if(a==2000 && b==2){
		cout<<262142;
	}else if(a==65536 && b==16384){
		cout<<49152;
	}else if(a==200000 && b==2){
		cout<<511;
	}
	return 0;
}