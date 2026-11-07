#include <bits/stdc++.h>
using namespace std;
int a[18],b[19][6];
int main(){
	int c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==a[18]&&c2==a[18]){
		cout<<"1";
	}else{
		cout<<"0";
	}
	if(s1==b[19][6]&&s2==b[19][6]){
		cout<<"1";
	}else{
		cout<<"0";
	}
	return 0;
}
