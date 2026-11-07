#include<bits/stdc++.h>
using namespace std;
const int N=200005;
long long a[N];
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	long long chang=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		chang+=a[i];
	}
	long long ans=0;
	long long l=1,r=1,li=1,ri=n;
	long long restli=a[1],restri=a[n];
	long long cost=0;
	while(li<ri){
		if(restli<restri){
			restri=restri-restli;
			cost=restli;
			if(c[li]!=c[ri]){
				ans+=cost;
			}
			li++;
			restli=a[li];
		}
		else if(restri<restli){
			restli=restli-restri;
			cost=restri;
			if(c[li]!=c[ri]){
				
				ans+=cost;
			}
			ri--;
			restri=a[ri];
		}
		else if(restli==restri){
			cost=restli;
			if(c[li]!=c[ri]){
				ans+=cost;
			}
			li++;
			restli=a[li];
			ri--;
			restri=a[ri];
		}
		
		
		
	}
	cout<<ans;
}
