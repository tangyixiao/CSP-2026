#include<bits/stdc++.h>
using namespace std;
long long n,as=0;
struct uct{
	int sh;
	char z;
}a[200005];
int dp(int l,int r,uct a[],long long as){
	if(l>r) return as;
	if(a[l].z!=a[r].z){
		if(a[l].sh>a[r].sh){
			a[l].sh-=a[r].sh; 
			dp(l,r-1,a,as+a[r].sh);
		}
		if(a[l].sh<a[r].sh){
			a[r].sh-=a[l].sh; 
			dp(l+1,r,a,as+a[l].sh);
		}
	}else dp(l+1,r-1,a,as);
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	long long l=1,r=n;
	for(int i=1;i<=n;i++){
		cin>>a[i].sh>>a[i].z;
	}
	cout<<dp(1,n,a,0);
	return 0;
}


