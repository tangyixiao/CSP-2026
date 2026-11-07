#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
    int n,m; 
    cin>>n>>m;
	long long arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
    if(m==1){
    	long long mx=0;
    	for(int i=0;i<n;i++){
    		mx=max(arr[i],mx);
		}
		cout<<mx;
		return 0;
	}
	if(m==n){
		long long u=arr[0];
		for(int i=1;i<n;i++){
			u&=arr[i];
		}
		cout<<u;
		return 0;
	}
	if(m==2){
		long long mx=0;
    	for(int i=0;i<n;i++){
    		for(int j=i+1;j<n;j++){
    			mx=max((arr[i]&arr[j]),mx);
			}	
		}
		cout<<mx;
		return 0;
	}
	if(m==n-1){
		long long mx=0;
		for(int i=0;i<n;i++){
			long long u=arr[0];
			for(int j=0;j<n;j++){
				if(j==i){
					if(j==0){
						u=arr[1];
						i+=2;
						continue;
					}
					continue;
				}
				u&=arr[j];
			}
			mx=max(mx,u);
		}
		cout<<mx;
		return 0;
	}
	return 0;
}
//Trick||Treat!
