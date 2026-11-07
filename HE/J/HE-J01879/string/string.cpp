#include<bits/stdc++.h>
using namespace std;
int n,a[200001];
long long sum=0;
char c[200001];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
	for(int i=1;i<=n/2;i++){
		if(c[i]!=c[n-i+1]){
			int mid=min(a[i],a[n-i+1])+(max(a[i],a[n-i+1])-min(a[i],a[n-i+1]))/2;
			sum+=(abs(mid-a[i])+mid);
			if(mid<a[i]) a[i+1]+=a[i]-mid;
			if(mid>a[i]){
				int mid1=mid;
				for(int j=1;j<=n/2;j++){
					if(mid1-a[i]<=a[i+j]){
						a[i+j]-=mid1-a[i+j];
						break;
					}
					else{
						a[i+j]=0;
						mid1-=a[i+j];
					}
				}
			if(mid<a[n-i+1]) a[n-i]+=a[n-i+1]-mid;
			if(mid>a[i]){
				int mid1=mid;
				for(int j=1;j<=n/2;j++){
					if(mid1-a[n-i-j+1]<=a[n-i-j+1]){
						a[n-i-j+1]-=mid1-a[n-i-j+1];
						break;
					}
					else{
						a[n-i-j+1]=0;
						mid1-=a[n-i-j+1];
					}
				}
			}
			a[i]=mid;
			a[n-i+1]=mid;
			}
		}
	}
	cout<<sum<<" ";
	fclose(stdin);
	fclose(stdout);
	return 0;
}
