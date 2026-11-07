#include<bits/stdc++.h>
using namespace std;
struct node{
	long long g;
	char z;
}a[200005];
int main(){
	int n;
	long long ans=0;
freopen("string.in","r",stdin);
freopen("string.out","w",stdout);
ios::sync_with_stdio(0);
cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].g>>a[i].z;}
int l=1,r=n;
long long k;
while(l<r){
	k=(min(a[l].g,a[r].g));
		if(a[l].z!=a[r].z){
			ans+=k;
		
		}
			a[l].g-=k;
			a[r].g-=k;
			if(a[l].g==0){
				l++;
			}
			if(a[r].g==0){
			r--;
			}
}
	cout<<ans;
	return 0;
}
