#include<bits/stdc++.h>
using namespace std;
long long int a[200005],sum=0; 
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int l=1,r=n;
	while(l<r){
		if(c[l]!=c[r]){
			sum+=min(a[l],a[r]);
		}
		if(a[r]>a[l]){
			a[r]-=a[l];
			l++;
		}else if(a[r]<a[l]){
			a[l]-=a[r];
			r--;
		}else{
			l++,r--;
		}
	}
	cout<<sum;
	return 0;
}