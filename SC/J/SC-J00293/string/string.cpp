#include<bits/stdc++.h>
using namespace std;
string s;
long long n,a[200005],cnt,ans,k;
char c[200005];
int main(){
	freopen("string.in","r","in");
	freopen("string.out","w","out");
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
		k+=a[i];
	}
	int l=0,r=n-1;
	int mid=k/2;
	while(cnt<=mid){
		if(c[l]!=c[r]) ans+=min(a[l],a[r]);
		cnt+=min(a[l],a[r]);
		if(a[l]<a[r]){
			l++;
			a[r]-=a[l];
		}else if(a[l]>a[r]){
			r--;
			a[l]-=a[r];
		}else l++,r--;
	}
	cout<<ans;
	return 0;
}