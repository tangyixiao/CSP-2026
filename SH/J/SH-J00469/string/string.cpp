#include<bits/stdc++.h>
using namespace std;
const int N=2*10e5+10;
int a[N];
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int l=1,r=n;
	long long cnt=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}while(l<=r){
		if(c[l]!=c[r]){
			if(a[l]>=a[r]){
				cnt+=a[r];
				a[l]-=a[r];
				r--;
				continue;
			}if(a[l]<a[r]){
				cnt+=a[l];
				a[r]-=a[l];
				l++;
				continue;
			}
		}else{
			if(a[l]>=a[r]){
				a[l]-=a[r];
				r--;
				continue;
			}if(a[l]<a[r]){
				a[r]-=a[l];
				l++;
				continue;
			}
		}
	}cout<<cnt;
	return 0;
} 
