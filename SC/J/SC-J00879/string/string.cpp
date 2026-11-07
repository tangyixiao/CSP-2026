#include<bits/stdc++.h> 
using namespace std;
const int N=2e5+5;
int n;
long long a[N],ans=0;
char c[N];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int j=n;
	for(int i=1;i<=n;i++){
		long long sum=0;
		if(j<=i){
			break;
		}
		while(sum<=a[i]&&j>i){
			if(sum==a[i]){
				break;
			}
			if(sum+a[j]<=a[i]&&c[j]!=c[i]){
				ans+=a[j];
				sum+=a[j];
			}
			else if(sum+a[j]>a[i]&&c[j]!=c[i]){
				ans+=a[i]-sum;
				a[j]-=a[i]-sum;
				break;
			}
			else if(c[i]==c[j]){
				if(sum+a[j]<=a[i]){
					sum+=a[j];
				}
				else{
					a[j]-=a[i]-sum;
					break;
				}
			}
			--j;
		}
	}
	cout<<ans;
	return 0;
}