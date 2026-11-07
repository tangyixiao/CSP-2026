#include<iostream>
#include<cstdio>
using namespace std;
const int N=2e5+5;
int n,a[N];
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i]>>c[i];
	int l=1,r=n;
	long long sum=0;
	while(l<r){
		if(c[l]==c[r]){
			if(a[l]>a[r])a[l]-=a[r--];
			else if(a[l]<a[r])a[r]-=a[l++];
			else l++,r--;
		}
		else{
			if(a[l]>a[r])sum+=a[r],a[l]-=a[r--];
			else if(a[l]<a[r])sum+=a[l],a[r]-=a[l++];
			else sum+=a[l],l++,r--;
		}
	}
	cout<<sum;
	return 0;
}