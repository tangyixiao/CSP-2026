#include <bits/stdc++.h>
using namespace std;
int m[1000005];
string a;
int main(){
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	int d=1;
	long long n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>m[i]>>a[i];
	}
	for(int i=0;i<a.size();i++){
		if(a[i]==a[i+1]){
			d==1;
		}
		else d==0;
	}
	if(d==1)cout<<"0";
	return 0;
} 
