#include<bits/stdc++.h>
using namespace std;
string a,b;
long long mun,cnt,sum=0;
int main(){
	freopen("string.in ","r",stdin);
	freopen("string.out","w",stdout);
	cin>>cnt;
	for(int i=1;i<=cnt;i++){
		cin>>mun>>b;
		for(int j=1;j<=mun;j++){
			a+=b;
		}
	}
	for(int i=0;i<=a.size()/2;i++){
		if(a[i]!=a[a.size()-i-1]){
			sum++;
		}
	}
	cout<<sum;
	return 0;
}