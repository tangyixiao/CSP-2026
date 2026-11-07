#include <bits/stdc++.h>
using namespace std;

int nums[10000000+5];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;

	if (m==1){
		int maxnum=0;
		for(int i=0;i<n;i++){
			cin>>nums[i];
			if (nums[i]>maxnum){
				maxnum=nums[i];
			}
		}
		cout<<maxnum;
		return 0;
	}
	
	if (m==2){
		for(int i=0;i<n;i++){
			cin>>nums[i];
		}
		int maxans=0; 
		for (int i=0;i<n;i++){
			for (int j=i+1;j<n;j++){
				int ans=(nums[i] & nums[j]);
				if (ans>maxans){
					maxans=ans;
				}
			}
		}
		cout<<maxans;
		return 0;
	}
	
	if (m==3){
		for(int i=0;i<n;i++){
			cin>>nums[i];
		}
		int maxans=0; 
		for (int i=0;i<n;i++){
			for (int j=i+1;j<n;j++){
				for (int k=j+1;k<n;k++){
					int ans=(nums[i] & nums[j] & nums[k]);
					if (ans>maxans){
						maxans=ans;
					}
				}
			}
		}
		cout<<maxans;
		return 0;
	}
	
	if (m==4){
		for(int i=0;i<n;i++){
			cin>>nums[i];
		}
		int maxans=0; 
		for (int i=0;i<n;i++){
			for (int j=i+1;j<n;j++){
				for (int k=j+1;k<n;k++){
					for (int l=k+1;l<n;l++){
						int ans=(nums[i] & nums[j] & nums[k] & nums[l]);
						if (ans>maxans){
							maxans=ans;
						}

					}
				}
			}
		}
		cout<<maxans;
		return 0;
	}
	
	if (m==n){
		int ans=0;
		for(int i=0;i<n;i++){
			cin>>nums[i];
			ans&=nums[i];
		}
		cout<<ans;
		
	}

} 
