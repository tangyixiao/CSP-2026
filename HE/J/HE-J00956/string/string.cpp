#include<bits/stdc++.h>
using namespace std;
long long n,a[1001];
int main(){
	freopen("string.in","w",stdout);
	freopen("string.out","r",stdin);
	cin>>n;
	char c[1001];
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	string s;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			s+=c[i];
		}
	}
	int sum=0;
	int len=s.size();
	len=len/2-(len%2);
	for(int i=1;i<=len;i++){
		for(int j=n;j>=len;j--){
			if(c[i]!=c[j])sum++;
		}
	}
	cout<<sum;
	return 0;
}
