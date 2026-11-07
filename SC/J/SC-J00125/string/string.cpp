#include<bits/stdc++.h> 
using namespace std;
const int N=2*1e5+5;
struct p{
	long long sum;
	char b;
}a[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i].sum>>a[i].b;
	}
	long long ans=0;
	long long i=0,j=n-1;
	while(i<=j){
		if(a[i].b==a[j].b){
			if(a[i].sum<a[j].sum){
				a[j].sum-=a[i].sum;
				i++;
			} 
			else if(a[i].sum==a[j].sum){
				i++,j--;	
			} else {
				a[i].sum-=a[j].sum;
				j--;
			}
		} else {
			if(a[i].sum<a[j].sum){
				a[j].sum-=a[i].sum;
				ans+=a[i].sum;
				i++;
			} else {
				a[i].sum-=a[j].sum;
				ans+=a[j].sum;
				j--;
			}
		}
	}
	cout<<ans;
	return 0;
}