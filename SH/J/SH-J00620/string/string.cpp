#include<bits/stdc++.h>
using namespace std;
long long n,a[200001],b[200001],sum,ans;
char c[200001],d[200001];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		sum+=a[i];
	}
	int cnt=0;
	for(int i=1;i<=n&&cnt<=i;i++){
		if(c[i]==c[i-1]){
			b[cnt]+=a[i];
		}
		else{
			cnt++;
			b[cnt]+=a[i];
			d[cnt]=c[i];
		}
	}
	if(cnt==1){
		cout<<0;return 0;
	}
	//for(int i=1;i<=cnt;i++)cout<<b[i]<<d[i]<<" ";
	//cout<<"\n";
	long long l=1,r=cnt;
	while(l<r){
		if(d[l]==d[r]){
			if(b[l]>b[r]){
				b[l]-=b[r];
				r--;
			}
			else if(b[l]==b[r]){
				l++;r--;
			}
			else{
				b[r]-=b[l];l++;
			}
		}
		else{
			if(b[l]>b[r]){
				b[l]-=b[r];
				ans+=b[r];
				r--;
			}
			else if(b[l]==b[r]){
				ans+=b[l];l++;r--;
			}
			else{
				b[r]-=b[l];
				ans+=b[l];
				l++;
			}
		}
		//cout<<ans<<" "<<l<<" "<<r<<"\n";
	}
	cout<<ans;
	return 0;
}
