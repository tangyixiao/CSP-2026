#include<bits/stdc++.h>
using namespace std;
long long a[200005];
string b[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	long long c=n,d=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	for(int i=1;i<=n;i++){
		if(b[i]!=b[c]){
			if(a[i]>=a[c]){
				d+=a[i];
				c--;
			}
			else {
				a[c]-=a[i];
				d+=a[i];
			}
		}
	}
	cout<<(d+1)/2;
	return 0;
}
