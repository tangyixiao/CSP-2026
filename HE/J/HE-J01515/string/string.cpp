#include<bits/stdc++.h>
using namespace std;
long long a[100000000050],n,r,l,cnt;
char b[100000000050];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
	}
	r=n-1;
	l=0;
	while(r>=l){
		if(b[l]==b[r]){
			if(a[l]>a[r]){
				a[l]=a[l]-a[r];
				r-=1;
			}
			else if(a[l]<a[r]){
				a[r]=a[r]-a[l];
				l+=1;
			}
			else if(a[l]==a[r]){
				l+=1;
				r-=1;
			}
		}
		else if(b[l]!=b[r]){
			if(a[l]>a[r]){
				cnt+=a[r];
				a[l]=a[l]-a[r];
				r-=1;
			}
			else if(a[l]<a[r]){
				cnt+=a[l];
				a[r]=a[r]-a[l];
				l+=1;
			}
			else if(a[l]==a[r]){
				cnt+=a[l];
				l+=1;
				r-=1;
			}
		}
		
	}
	cout<<cnt;
	return 0; 
} 

