#include<bits/stdc++.h>
using namespace std;
char s[200010];
long long a[200010],n,m,ss,ss1;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i]>>s[i];
		ss+=a[i];
	}
	if(ss%2==1||ss%2==0){
		long long l=1,r=n;
		while(l<=r){
			
			if(s[l]!=s[r]){
			
				if(a[l]<a[r]){
					ss1+=a[l];
					a[r]-=a[l];
					a[l]=0;
					l++;
				}
				else if(a[l]>a[r]){
					ss1+=a[r];
					a[l]-=a[r];
					a[r]=0;
					r--;
				}
				else{
//					cout<<a[l]<<"\n";
					ss1+=a[l];
					
					a[l]=0;
					a[r]=0;
					l++,r--;
				}
			}
			else{
				if(a[l]<a[r]){
					
					a[r]-=a[l];
					a[l]=0;
					l++;
				}
				else if(a[l]>a[r]){
					
					a[l]-=a[r];
					a[r]=0;
					r--;
					
				}
				else{
					
					a[l]=0;
					a[r]=0;
					l++,r--;
				}				
			}
		}
	}
	cout<<ss1;
	return 0;
}
