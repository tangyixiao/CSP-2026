#include<bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;
const int inf=0x3f3f3f3f;
const int N=2e6+9;
int n,sum;
int a[200005];
char c[200005];
signed main(){
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
		if(c[i]!=c[j]){
			if(a[i]>a[j]){
				sum+=a[j];
				a[i]-=a[j];
				a[j]=0;
				
			}else if(a[i]<a[j]){
				sum+=a[i];
				a[j]-=a[i];
				a[i]=0;
			}else{
				sum+=a[i];
				a[i]=0;
				a[j]=0;
			}
		}else if(c[i]==c[j]){
			if(a[i]>a[j]){
				a[i]-=a[j];
				a[j]=0;
			}else if(a[i]<a[j]){
				a[j]-=a[i];
				a[i]=0;
			}else{
				a[i]=0;
				a[j]=0;
			}
		}
		if(a[i]==0)i++;
		if(a[j]==0)j--;
	}
	cout<<sum;
	return 0;
}