#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,ans=0,p;
	long long a[200005];
	char c[200005];
	cin>>n;
	if(n==1) {
		cout<<0;
		return 0;
	}
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
	}
	for(int i=0;i<n;i++){
		while(a[i]--) s+=c[i];
	}p=s.size();
	for(int i=0;i<p/2;i++){
		if(s[i]!=s[p-1-i]) ans++;
	}cout<<ans;
	fclose(stdin);
	fclose(stdout); 
	return 0;
}