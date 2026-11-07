#include<bits/stdc++.h>
using namespace std;
int n;
long long a[200005];
char c[200005];
long long cnt;
long long k=1;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
	}
	for(int i=0;i<n;i++){
		while(a[i]>0){
			if(c[n-k]==c[i]){
				if(a[n-k]<=a[i]){
					a[i]-=a[n-k];
					a[n-k]=0;
					k++;
				}else{
					a[n-k]-=a[i];
					a[i]=0;
				}
			}else{
				if(a[n-k]<=a[i]){
					cnt+=a[n-k];
					a[i]-=a[n-k];
					a[n-k]=0;
					k++;
				}else{
					cnt+=a[i];
					a[n-k]-=a[i];
					a[i]=0;
				}
			}
		}
	}
	cout<<cnt;
	return 0;
}
