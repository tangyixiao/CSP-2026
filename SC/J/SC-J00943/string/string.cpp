#include<bits/stdc++.h>
using namespace std;
long long n;
long long a[200005];
char c[200005];
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin>>n;
    for(long long i=1;i<=n;++i){
    	cin>>a[i]>>c[i];
	}
	long long l=1,r=n;
	long long res=0;
	while(l!=r&&l<r){
		//cout<<"deal the "<<l<<" & "<<r<<endl;
		//cout<<a[l]<<" "<<c[l]<<endl;
		//cout<<a[r]<<" "<<c[r]<<endl; 
		if(a[l]>a[r]){
			if(c[l]!=c[r]){
				res+=a[r];
			}
			a[l]-=a[r];
			r--;
		}else if(a[l]<a[r]){
			if(c[l]!=c[r]){
				res+=a[l];
			}
			a[r]-=a[l];
			l++;;
		}else{
			if(c[l]!=c[r]){
				res+=a[l];
			}
			l++;
			r--;
		}
	}
	cout<<res<<endl;
	return 0;
} 