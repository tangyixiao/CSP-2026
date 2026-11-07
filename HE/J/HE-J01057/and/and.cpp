#include<bits/stdc++.h>
using namespace std;
const int MAXN=2E5+5;
long long a[MAXN];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	long long ans=0;
	if(m==n){
		cin>>a[0];
		ans=a[0];
		for(int i=1;i<n;i++){
			cin>>a[i];
			ans=ans & a[i];
		}
	}else{
		if(m==2){
			for(int i=0;i<n-1;i++){
				for(int j=i+1;j<n;j++){
					if((a[i]&a[j])>ans) ans=a[i] & a[j];
				}
			}
		}else{
            for(int i=0;i<n;i++) cin>>a[i];
            sort(a,a+n);
            ans=a[n-1];
            for(int i=n-2;i>n-1-m;i--){
                ans=ans & a[i];
		}
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

