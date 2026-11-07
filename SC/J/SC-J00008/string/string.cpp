#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n,a[200005];
char c[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	long long p=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		p+=a[i];
	}
	int o=p;
	int u=o;
	if(o%2==1){
		o=(o+1)/2;
	}
	
	char t;
	for(int i=1;i<=n;i++){//cout<<"o:"<<o<<endl;
		o-=a[i];
		if(o<=0){
			
			t=c[i];	
			break;
		}
		
	}
	
	int ans=0;
	int l=1;int r=n;
	while(l<r){
	
		if(c[l]==c[r]){
			if(a[l]>a[r]){
				a[l]-=a[r];
				r--;
			}else if(a[l]==a[r]){
				a[l]=0;
				l++;
				r--;
			}else{
				a[r]-=a[l];
				a[l]=0;
				l++;
				
				
			}
		}else{
			if(a[l]>a[r]){
				ans+=a[r];
				a[l]-=a[r];
				r--;
			}else if(a[l]==a[r]){
				ans+=a[l];
				a[l]=0;
				l++;
				r--;
			}else{
				ans+=a[l];
				a[r]-=a[l];
				a[l]=0;
				l++;
				
			}
		}
	}
//	if(u%2==1){
//		if(t!=c[1])ans--;
//	}
	
	cout<<ans;
	return 0;
}
	
