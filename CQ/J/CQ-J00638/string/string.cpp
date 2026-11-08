#include<bits/stdc++.h>
using namespace std;
long long a[200050],n,ans,num,x[200050],ww;
char c[200050],y[200050];
bool flag;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0); 
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		num+=a[i];
	}
	for(long long i=1;i<=n;i++){
		if(ww+a[i]>num/2&&flag==0){
			x[i]=num/2-ww;
			x[i+1]=ww+a[i]-((num-1)/2+1);
			y[i]=c[i];
			y[i+1]=c[i];
			flag=1;
		}
		ww+=a[i];
		if(flag==1){
			x[i+1]=a[i];
			y[i+1]=c[i];
		}else{
			x[i]=a[i];
			y[i]=c[i];
		}
	}
	long long l=1,r=n+1;
	while(l<r){
		if(x[l]>x[r]){
			if(y[l]!=y[r]){
				ans+=x[r];
			}
			x[l]-=x[r];
			x[r]=0;
			r--;
		}else{
			if(x[l]==x[r]){
				if(y[l]!=y[r]){
					ans+=x[l];
				}
				x[l]=0;
				x[r]=0;
				l++;
				r--;
			}else{
				if(y[l]!=y[r]){
					ans+=x[l];
				}
				x[r]-=x[l];
				x[l]=0;
				l++;
			}
		}
	}
	cout<<ans<<"\n";
	return 0;
}
