#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct node{
	int x;
	char s;
}a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].x>>a[i].s;
	}
	int ans=n;
	int t1=1,t2=n;
	ll sum=0;
	while(ans>1){
		if(a[t1].s==a[t2].s){
			if(a[t1].x==a[t2].x){
				ans-=2;
				t1++;
				t2--;
			}else if(a[t1].x<a[t2].x){
				ans--;
				a[t2].x-=a[t1].x;
				t1++;
			}else if(a[t1].x>a[t2].x){
				ans--;
				a[t1].x-=a[t2].x;
				t2--;
			}
		}else{
			if(a[t1].x==a[t2].x){
				sum+=a[t1].x;
				ans-=2;
				t1++;
				t2--;
			}else if(a[t1].x<a[t2].x){
				sum+=a[t1].x;
				ans--;
				a[t2].x-=a[t1].x;
				t1++;
			}else if(a[t1].x>a[t2].x){
				sum+=a[t2].x;
				ans--;
				a[t1].x-=a[t2].x;
				t2--;
			}
		}
	}
	cout<<sum;
	return 0;
}
