#include<bits/stdc++.h>
using namespace std;
int a[1000005];
char b[1000005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n=0,sum=0;
	cin>>n;
	string s;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	if(n<=1)cout<<"0";
	return 0;
}
