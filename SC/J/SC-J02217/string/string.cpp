#include<bits/stdc++.h>
using namespace std;
const int N = 200005;
long long n,a[N],k,s;
char c[N];
int main(){
	cin>>n;
	for(long long i = 1;i<=n;i++){
		cin>>a[i]>>c[i];
		k+=a[i];
	}
	k/=2;
	long long l = 1,r = n;
	while(k--){
		if(c[l]!=c[r]){
			if(a[l]!=a[r]){
				s+=min(a[l],a[r]);
				if(a[l]>a[r]){
					a[l]-=a[r];
					r--;
				}
				else if(a[l]<a[r]){
					a[r]-=a[l];
					l++;
				}
			}
			else {
				s+=a[l];
				r--;
				l++;
			}
			
		}
		else {
			if(a[l] = a[r]){
				l++;
				r--;
			} 
			else if(l<r){
				a[r]-=a[l];
				l++;
			}
			else{
				a[l]-=a[r];
				r--;
			}
		}
		if(a[l] == 0)l++;
		if(a[r] == 0)r--;
		if(r == l)break;
	}
	cout<<s;
	return 0;
}