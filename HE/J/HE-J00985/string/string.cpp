#include<bits/stdc++.h>
using namespace std;
long long n,s=0;
long long a[200005];
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin>>n;
	long long l=1,r=n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	while(l<r){
		if(a[l]>a[r]){
			if(c[l]!=c[r])s+=a[r];
			a[l]-=a[r];r--;
		}else{
			if(c[l]!=c[r])s+=a[l];
			a[r]-=a[l];l++;
		}
	}
	cout<<s<<endl;
	return 0;
} 
