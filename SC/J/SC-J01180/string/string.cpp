#include <bits/stdc++.h>
using namespace std;
int x,ai;
long long n,a[20005];
char c[20005];
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	if(n==1){
		cout<<0;
	}
	if(n==2){
		if(c[1]!=c[2]){
			cout<<min(a[1],a[2]);
		}else{
			cout<<0;
		}	
	}
	for(int i=1;i<=n;i++){
		x+=a[i];
		for(int j=1;j<=a[i];j++){
			s=s+c[i];
		}
	}
	if(x%2==0){
		for(int i=0;i<n/2;i++){
			if(s[i]!=s[x-1-i]){
				ai++;
			}
		}
	}else{
		for(int i=0;i<(n-1)/2;i++){
			if(s[i]!=s[x-1-i]){
				ai++;
			}
		}
	}
	cout<<ai+1;
	return 0;
}