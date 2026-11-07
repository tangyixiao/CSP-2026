#include<bits/stdc++.h>
using namespace std;
int n;
long long int ans;
int a[200010];
char c[200010];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
	}
	for(int i=0,j=n-1;i<j;){
		if(c[i]==c[j]){
			if(a[i]>a[j]){
				a[i]-=a[j];
				a[j]=0;
			}else{
				a[j]-=a[i];
				a[i]=0;
			}
		}else{
			if(a[i]>a[j]){
				a[i]-=a[j];
				ans+=a[j];
				a[j]=0;
			}else{
				a[j]-=a[i];
				ans+=a[i];
				a[i]=0;
			}
		}
		if(a[i]==0){
			i++;
		}
		if(a[j]==0){
			j--;
		}
	}
	cout<<ans;
	return 0;
}