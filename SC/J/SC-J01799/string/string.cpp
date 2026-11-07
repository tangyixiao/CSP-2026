#include<bits/stdc++.h>
using namespace std;
int a[200005];
char b[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		cin>>b[i];
	}
	long long jie=0;
	int l=0;
	int r=n-1;
	while(l<r){
		if(b[l]==b[r]){
			if(a[l]>a[r]){
				a[l]-=a[r];
				r--;
			}else if(a[l]<a[r]){
				a[r]-=a[l];
				l++;
			}else{
				l++;
				r--;
			}
		}else{
			if(a[l]>a[r]){
				jie+=a[r];
				a[l]-=a[r];
				r--;
			}else if(a[l]<a[r]){
				jie+=a[l];
				a[r]-=a[l];
				l++;
			}else{
				jie+=a[l];
				l++;
				r--;
			}
		}
	}
	cout<<jie;
	return 0;
}