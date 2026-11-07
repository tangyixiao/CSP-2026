#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,a,cnt=0;
	unsigned long long q=0;
	cin>>n;
	char c;
	string s;
	
	for(int i=0;i<n;i++){
		cin>>a>>c;
		q+=a;
		for(int j=0;j<a;j++){
			s+=c;
		}
	}
	for(long long i=0;i<q/2;i++){
		if(s[i]!=s[q-i-1]){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
