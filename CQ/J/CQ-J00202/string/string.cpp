#include<bits/stdc++.h>
using namespace std;

int n;
long long a[200005];
char c[200005];
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i=1;i<=n;i++) cin >> a[i] >> c[i];
	long long sum=a[1];
	int k=1; 
	for(int i=1,j=n;i<j;){
		if(c[i]==c[j]){
			if(sum>a[j] && k==1){
				sum-=a[j];
				j--;
			}
			else if(sum<a[j] && k==1){
				sum=a[j]-sum;
				k=2;
				i++;
			}
			else if(sum>a[i] && k==2){
				sum-=a[i];
				i++;
			}
			else if(sum<a[i] && k==2){
				sum=a[i]-sum;
				k=1;
				j--;
			}
			else if((sum==a[i] && k==2) || (sum==a[j] && k==1)){
				i++;
				j--;
				sum=a[i];
				k=1;
			}
		}
		else{
			if(sum>a[j] && k==1){
				sum-=a[j];
				ans+=a[j];
				j--;
			}
			else if(sum<a[j] && k==1){
				ans+=sum;
				sum=a[j]-sum;
				k=2;
				i++;
			}
			else if(sum>a[i] && k==2){
				sum-=a[i];
				ans+=a[i];
				i++;
			}
			else if(sum<a[i] && k==2){
				ans+=sum;
				sum=a[i]-sum;
				k=1;
				j--;
			}
			else if((sum==a[i] && k==2) || (sum==a[j] && k==1)){
				i++;
				j--;
				ans+=sum;
				sum=a[i];
				k=1;
			}
		}
	}
	cout << max(ans,0ll);
	return 0;
}
