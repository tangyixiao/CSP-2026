#include<iostream>
using namespace std;
char c[200010];
int a[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long sum=0,mid,ans=0,l=0,r=0;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
		sum+=a[i];
	}
	mid=(sum+1)/2;
	for(int i=0,j=n-1;j>=i;){
		if(i==j){
			break;
		}
		if(a[i]>a[j]){
			if(c[i]!=c[j]){
				ans+=a[j];
			}
			a[i]-=a[j];
			j--;
			r+=a[j];
		}else if(a[i]<a[j]){
			if(c[i]!=c[j]){
				ans+=a[i];
			}
			a[j]-=a[i];
			i++;
			l+=a[i];
		}else{
			if(c[i]!=c[j]){
				ans+=a[j];
			}
			i++;
			j--;
			l+=a[i],r+=a[j];
		}
	}
	cout<<ans;
	return 0;
}
