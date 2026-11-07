#include<bits/stdc++.h>
using namespace std;
char a[100005];
long long s[100000005];
int main(){
	freopen("string6.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,pc=0,su=0;
	string p;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i]>>a[i];
		p=p+a[i];
		if(a[1]==a[i]){
			su++;
		}
	}
	if(su==n){
		cout<<0;
		return 0;
	}
	for(int i=0;i<n/2;i++){
		if(p[i]!=p[n-i-1]){
		    pc++;
		}
	}
	cout<<s[1]*pc;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
