#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;
long long a[200005];
char b[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string s;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	long long ans=0;
	long long l=1,r=n;
	while(l<r){
		if(a[l]>a[r]){
			if(b[l]!=b[r])	ans+=a[r];
			a[l]-=a[r],r--;
		}
		else if(a[l]<a[r]){
			if(b[l]!=b[r])	ans+=a[l];
			a[r]-=a[l],l++;
		}
		else{
			if(b[l]!=b[r]) ans+=a[l];
			l++,r--;
		}
	}
	cout<<ans;
	return 0;
}
