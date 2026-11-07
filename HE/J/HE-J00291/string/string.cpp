#include<bits/stdc++.h>
using namespace std;
long long a[200005];
long long ji;
char b[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	for(int i=1,l=n;i<=n,l>=n/2+1;){
		if(b[i]!=b[l]){
			ji+=min(a[i],a[l]);
			if(a[i]<=a[l]){
				a[l]-=a[i];i++;
			}
			if(a[i]>=a[l]){
				a[i]-=a[l];l--;
			}
		}
		if(b[i]==b[l]){
			if(a[i]<=a[l]){
				a[l]-=a[i];i++;
			}
			if(a[i]>=a[l]){
				a[i]-=a[l];l--;
			}
		}
	}
	cout<<ji;
	return 0;
}
