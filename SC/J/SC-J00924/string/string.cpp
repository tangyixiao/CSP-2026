#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long l=0,a[200001],n;
	string s;
	char c[200001];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<a[i];j++){
			s[l]=c[i];
			l++;
		}
	}
	long long ans=0;
	if(l%2==0){
		for(int i=0;i<l/2;i++){
			if(s[i]!=s[l-i]) ans++;
		}
	}else{
		for(int i=0;i<l/2;i++){
			if(s[i]!=s[l-i-1]) ans++;
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}