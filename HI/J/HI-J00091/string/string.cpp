#include<bits/stdc++.h>
using namespace std;
string a="";
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int o;
		string b;
		cin>>o>>b;
		for(int j=1;j<=o;j++){
			a+=b;
		}
	}
	int sum=0;
	int len=a.size()-1;
	
	for(int i=0;i<=len/2;i++){
		if(a[i]!=a[len-i]){
			sum++;
		}
	}
	cout<<sum;
	return 0;
}
