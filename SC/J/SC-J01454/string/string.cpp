#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,h=1,t,temp=0;
	cin>>n;
	t=n;
	long long a[n+10],ans=0;
	char b[n+10];
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	while(h<t){
		if(a[h]>a[t]){
			if(b[h]!=b[t]){
				ans=ans+a[t];
				a[h]=a[h]-a[t];
			}
			t=t-1;
		}
		if(a[h]<a[t]){
			if(b[h]!=b[t]){
				ans=ans+a[h];
				a[t]=a[t]-a[h];
			}
			h=h+1;
		}
		if(a[h]==a[t]){
			if(b[h]!=b[t]){
				ans=ans+a[h];
			}
			h=h+1;t=t-1;
		}
	}
	cout<<ans;
	return 0;
}