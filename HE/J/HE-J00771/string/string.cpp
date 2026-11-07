#include<bits/stdc++.h>
using namespace std;
int a[100005],n;
long long m;
char b[100005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	int l=1,r=n;
	while(l<r){
		if(b[l]==b[r]){
			if(a[l]>a[r]){
				a[l]-=a[r];
				r--;
			}else{
				if(a[l]<a[r]){
					a[r]-=a[l];
					l++;
				}else{
					r--;
					l++;
				}
			}
		}else{
			if(a[l]==a[r]){
				m+=a[l];
				r--;
				l++;
			}else{
				if(a[l]>a[r]){
					a[l]-=a[r];
					m+=a[r];
					r--;	
				}else{
					if(a[l]<a[r]){
						a[r]-=a[l];
						m+=a[l];
						l++;
					}
				}
			}	
		}
	}
	cout<<m<<endl;
	return 0;
}
