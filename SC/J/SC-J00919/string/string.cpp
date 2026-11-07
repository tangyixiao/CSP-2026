#include<bits/stdc++.h>
using namespace std;
long long ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long f=0;
	char a[n][2];
	char s[2000000];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i][0]>>a[i][1];
		int k=a[i][0]-'0';
		while(k>0){
			s[f]=a[i][1];
			f++;
			k--;
		}
	}
	long long j=f-1;
	for(int i=0;i<f/2;i++){
		if(s[i]!=s[j]){
			ans++;
		}
		j--;
	}
	cout<<ans;
	return 0;
}