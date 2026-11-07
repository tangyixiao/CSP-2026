#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	long long a;
	char c;
	cin>>n;
	string s,b;
	for(int i=0;i<n;i++){
		cin>>a>>c;
		for(int j=1;j<=a;j++){
			s=s+c;
		}
	}
	int z=0;
	for(int i=s.size();i>0;i--){
		b[i-1]=s[z];
		z++;
	}
	int m=0;
	for(int i=0;i<s.size();i++){
		if(b[i]!=s[i]){
			m++;
		}
	}
	cout<<m/2;   
	return 0;
}
