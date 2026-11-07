#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);	
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	int a[105];
	string str1,str2;
	cin>>n;
	if(n==1) {cin>>a[1]>>str1;cout<<"0";}
	else 	cin>>a[1]>>str1>>a[2]>>str2;
	if(n==2&&str1!=str2){
		cout<<a[2];
	}
	if(n==2&&str1==str2){
		cout<<"0";
	}
	return 0;
}