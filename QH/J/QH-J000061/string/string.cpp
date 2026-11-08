#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,m[100],sum=0;
	char a[100];
	string s;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>m[i]>>a[i];
	}
	for(int i=0;i<n;i++){
		s+=a[i]*m[i];
	}
	for(int i=0;i<s.length()/2;i++){
		if(s[i]!=s[(s.length()-1/2)+i]){
			sum++;
		}
	}
		cout<<sum;
	return 0;
}
