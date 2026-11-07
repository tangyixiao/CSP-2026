#include<bits/stdc++.h>
using namespace std;
long long n;
long long cnt=0;
long long a[2000005];
char b[2000005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%ld",&n);
	for(long long i=0;i<n;i++){
		scanf("%ld %c",&a[i],&b[i]);
	}
	long long h=0,l=n-1;
	while(h<=l){
		if(b[h]!=b[l]){
			if(a[h]>a[l]){
				cnt+=a[l];
				a[h]-=a[l];
				l--;
			}
			else if(a[h]<a[l]){
				cnt+=a[h];
				a[l]-=a[h];
				h++;
			}
			else{
				cnt+=a[h];
				h++;
				l--;
			}
		}
		else if(b[h]==b[l]){
				if(a[h]>a[l]){
				a[h]-=a[l];
				l--;
			}
			else if(a[h]<a[l]){
				a[l]-=a[h];
				h++;
			}
			else{
				h++;
				l--;
			}
		}
	}
	cout<<cnt;
	return 0;
}
