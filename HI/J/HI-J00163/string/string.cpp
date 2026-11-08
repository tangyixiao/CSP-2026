#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,k=0;
	cin>>n;
	string s;
	for(int i=1;i<=n;i++){
		long long a;
		char b;
		cin>>a>>b;
		for(int j=1;j<=a;j++){
			s+=b;
		}
		k+=a;
	}
	long long sum=0;
	if(k%2==0){
		for(int i=0;i<k/2;i++){
			if(s[i]!=s[k-i-1]){
				sum++;
			}
		}
	}
	if(k%2!=0){
		for(int i=0;i<k/2;i++){
			if(s[i]!=s[k-i-1]){
				sum++;
			}
		}
	}
	cout<<sum;
	return 0;
}

