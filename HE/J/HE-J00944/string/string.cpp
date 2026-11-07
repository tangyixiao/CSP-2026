#include<bits/stdc++.h>
using namespace std;
int main(){
freopen("string.in","r",stdin);
freopen("string.out","w",stdout);
	string s;
	long long n,a;
	cin>>n;
	char c;
	long long sum=0;
	for(long long i=0;i<n;i++){
		cin>>a;
		cin>>c;
		sum+=a;
		for(int j=0;j<a;j++){
			s+=c;
		}
	}
	int f=0;
	for(long long i=sum-1;i>=0;i--){
		if(s[i]!=s[sum-i]){
			f++;
		}
	}
	cout<<f;
fclose(stdin);
fclose(stdout);
	return 0;
}
