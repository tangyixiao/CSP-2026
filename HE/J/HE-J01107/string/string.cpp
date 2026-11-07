#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,x,s=0;
	cin>>n;
	int a[n+5];
	char b[n+5];
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	for(int l=1,r=n;l<r;){
		if(b[l]!=b[r]){
			s+=min(a[l],a[r]);
		}
		if(a[l]>a[r]){
			a[l]-=a[r];
			r--;
		}
		else if(a[l]==a[r]){
			l++,r--;
		}
		else{
			a[r]-=a[l];
			l++;
		}
	}
	cout<<s;
	return 0;
}
