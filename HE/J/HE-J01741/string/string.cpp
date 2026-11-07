#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int l,s=0;
	long long n,a;
	char c;
	string b;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>c;
		for(int j=0;j<a;j++){
			b+=c;
		}
	}
	l=b.size();
	for(int i=0;i<=l/2;i++){
		if(b[i]!=b[l-i-1])	s++;
	}
	cout<<s;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
