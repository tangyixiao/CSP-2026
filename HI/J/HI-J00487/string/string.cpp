#include<bits/stdc++.h>
using namespace std;
int n,a,sum=0,d=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string b,c="";
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>b;
		for(int j=1;j<=a;j++){
			c+=b;
			d++;
		}
	}
	for(int i=0;i<=d/2;i++){
		if(c[i]!=c[d-i]){
			sum++;
		}
	}
	cout<<sum;
	return 0;
}
