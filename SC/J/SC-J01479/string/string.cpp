#include<bits/stdc++.h>
#define ll long long 
using namespace std;
struct P{
	ll s;
	char c;
}a[200005];
ll pre[200005];
int main (){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >>n;
	for (int i=1;i<=n;i++){
		cin >>a[i].s >>a[i].c ;
		pre[i]=pre[i-1]+a[i].s;
	}

	ll i=0,j=pre[n],sun=1,sum=n-1;
	ll ans=0; 
	if (pre[n]%2==0){
		ll mid=pre[n]/2;
		while(i<=mid && j>=mid+1){
			if(pre[sun]-i>=j-pre[sum]){
				
				
				if (a[sun].c != a[sum+1].c ){
					ans+=j-pre[sum];
				}
				i+=j-pre[sum];
				j=pre[sum];
				sum--;
			}else {
				
				
				if (a[sun].c != a[sum+1].c ){
					ans+=pre[sun]-i;
				}
				j-=pre[sun]-i;
				i=pre[sun];
				sun++;
				
			}
		}
	}if (pre[n]%2!=0){
		ll mid=pre[n]/2+1;
		while(i<mid && j>mid){
			if(pre[sun]-i>=j-pre[sum]){
				
				
				if (a[sun].c !=a[sum+1].c ){
					ans+=j-pre[sum];
				}
				i+=j-pre[sum];
				j=pre[sum];
				sum--;
			}else {
				
				
				if (a[sun].c != a[sum+1].c ){
					ans+=pre[sun]-i;
				}
				j-=pre[sun]-i;
				i=pre[sun];
				sun++;
			}
		}
	}
	cout <<ans;
}  