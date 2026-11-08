#include<iostream>
#include<cmath>
#define int long long 

using namespace std;
int a[200000];
char c[200000];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,q=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
		if(a[i]%2==1)q++;
	}
	int i=0,j=n-1,g=0;
	while(i<j){
		if(c[i]!=c[j]){
			g+=min(a[i],a[j]);
			a[i]-=a[j];
			a[j]-=a[i];
			i+=(a[i]<1);
			j-=(a[j]<1);
		}else i++,j--;
	}
	cout<<g;
	return 0;
} 
