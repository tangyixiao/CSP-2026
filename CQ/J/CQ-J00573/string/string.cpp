#include<bits/stdc++.h>
using namespace std;
string s;
char k[200001];
int a[200001],n;
long long ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>k[i];
	}
	int l=0,r=n-1;
	while(l<=r){
		if(a[l]>a[r]){
			if(k[l]!=k[r]){
				ans+=a[r];
			}
			a[l]-=a[r];
			r--;
		}else{
			if(k[l]!=k[r]){
				ans+=a[l];
			}
			a[r]-=a[l];
			l++;
		}
	}
	cout<<ans;
	return 0;
}
