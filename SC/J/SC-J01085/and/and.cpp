#include<bits/stdc++.h>
using namespace std;
int main(){
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	int n,m;
	cin>>n>>m;
	long long arr[n+1];
	for(int i=1;i<=n;i++)cin>>arr[i];
	if(m==1){
		sort(arr+1,arr+1+n);
		cout<<arr[n];
	}
	else if(m==2){
	    int max=-1;
	    for(int i=1;i<=n;i++){
		    for(int j=i+1;j<=n;j++){
		    	int k=arr[i]&arr[j];
		    	if(k>max)max=k;
			}
	    }
	    cout<<max;
    }
    else if(m==n){
    	int ans=arr[1];
    	for(int i=1;i<=n;i++)ans=ans&arr[i];
    	cout<<ans;
	}
	else {
		sort(arr+1,arr+n+1);
		int ans=arr[n];
		for(int i=1;i<=m;i++)ans=ans&arr[n+1-i];
		cout<<ans;
	}
	return 0;
}