#include<bits/stdc++.h>
using namespace std;
const int MAXN=2e5+5;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	long long n,a[MAXN];
	char b[MAXN];
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>b[i];
	int le=1,re=n;
	long long ans=0;
    while(1){
    	bool fl=true;
		for(;a[le]>0&&fl;re--){
			if(le==re){
				cout<<ans;
				return 0;
			}
			if(a[le]>a[re]) a[le]-=a[re],ans+=a[re]*(b[le]!=b[re]);
			else if(a[le]==a[re]){
				fl=false;
				ans+=a[le]*(b[le]!=b[re]);
				le++;
				if(le>=re-1){
					cout<<ans;
					return 0;
				}
			}else{
				fl=false;
				ans+=a[le]*(b[le]!=b[re]);
				a[re]-=a[le];
				re++;
				le++;
				if(le==re-1){
					cout<<ans;
					return 0;
				}
			}
		}
	}
	return 0;
}
