#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005],sum;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(m==1){
		long long max1=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			max1=max(max1,a[i]);
		}
		cout<<max1;
		return 0;
	}
	if(m==n){
		int min1=40;
		int cnt=0;
		int s[200];
		for(int i=0;i<n;i++){
			cin>>a[i];
			long long c=a[i];
			while(c!=0){
				if(c%2==0)s[cnt]=0;
				c/=2;
				cnt++;
			}
			min1=min(min1,cnt);
			cnt=0;
		}
		for(int i=0;i<=min1;i++){
			int j=i;
			while(j>0){
				s[i]*=2;
			}
			sum+=s[i];
		}
		cout<<sum;
		return 0;
	}	
	return 0;
}
