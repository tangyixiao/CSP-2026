#include<bits/stdc++.h>
using namespace std;

int a[200005];
char b[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	long long sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	long long x=0;
	for(long long i=1;i<=n/2||x<=n/2;){
		if(a[i]-a[n-x]>0){
			if(b[i]!=b[n-x]){
				sum+=a[n-x];
				//cout<<b[i]<<" "<<b[n-x]<<endl;
			}
			a[i]-=a[n-x];
			//cout<<a[i]<<" "<<a[n-x]<<" "<<i<<" "<<x<<endl;
			x++;
		}
		else if(a[i]-a[n-x]<0){
			if(b[i]!=b[n-x]){
				sum+=a[i];
				//cout<<b[i]<<" "<<b[n-x]<<endl;
			}
			a[n-x]-=a[i];
			//cout<<a[i]<<" "<<a[n-x]<<" "<<i<<" "<<x<<endl;
			i++;
		}
		else if(a[i]-a[n-x]==0){
			if(b[i]!=b[n-x]){
				sum+=a[n-x];
				//cout<<b[i]<<" "<<b[n-x]<<endl;
			}
			//cout<<a[i]<<" "<<a[n-x]<<" "<<i<<" "<<x<<endl;
			i++;
			x++;
		}
	}
	cout<<sum;
	return 0;
}
