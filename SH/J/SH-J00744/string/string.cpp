#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+1;
long long a[maxn];
char b[maxn];
char wm[maxn];
long long n,t,ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
		t+=a[i];
	}
	int i=0;int j=n-1;
		while(i!=j){
			if(b[i]!=b[j]){
				if(a[i]>=a[j]){
					ans+=a[j];
					a[i]=a[i]-a[j];
					i--;
				}else{
					ans+=a[i];
					a[j]=a[j]-a[i];
					j++;
				}
			}else{
				if(a[i]>=a[j]){
					a[i]=a[i]-a[j];
					i--;
				}else{
					a[j]=a[j]-a[i];
					j++;
				}
			}
			i++;j--;
		}

	cout<<ans;
	return 0;
}
