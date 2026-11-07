#include<bits/stdc++.h>
using namespace std;
long long a[100000000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,he,ge;
	cin>>n;
	string s1,s2,s3;
	
	for(int i=1;i<=n;i++){
		cin>>a[i]>>s1;
		s1=s1[i]-'a'+1;
		while(a[i]--){
			s2+=s1;
		}
	}
	cout<<0;
	return 0;
}


