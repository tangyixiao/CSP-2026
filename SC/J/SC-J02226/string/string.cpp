#include<bits/stdc++.h>
using namespace std;
int j=1,k,a[200005],n;
char b[200005];
long long nmn;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	k=n;
	for(long long i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	while(j<k){
		if(b[j]!=b[k]){
			if(a[j]<a[k]){				
				nmn+=a[j];
				a[k]-=a[j];
				j++;
			}
			else if(a[j]==a[k]){				
				nmn+=a[j];
				j++;
				k--;
			}
			else if(a[j]>a[k]){
				nmn+=a[k];
				a[j]-=a[k];
				k--;
			} 
		} 
		else if(b[j]==b[k]){
			if(a[j]<a[k]){				
				a[k]-=a[j];
				j++;
			}
			else if(a[j]==a[k]){
				j++;
				k--;
			}
			else if(a[j]>a[k]){
				a[j]-=a[k];
				k--;
			} 
		} 
		//cout<<j<<" "<<k<<" "<<nmn<<'\n';
	}
	cout<<nmn;
	return 0;
} 