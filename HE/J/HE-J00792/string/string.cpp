#include<bits/stdc++.h>
using namespace std;
int n;
int a[10000010]={0};
char b[1000010]; 
long long cnt=0;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	int l=1;
	int r=n;
	while(l<=r){
		if(a[l]==a[r]){
			if(b[l]!=b[r]){
				cnt+=a[l];
				l++;
				r--;
			}
			else{
				l++;
				r--;
			}
		}
		else{
			if(a[l]<a[r]){
				if(b[l]==b[r]){
					a[r]-=a[l];
					l++;
				}
				else{
					cnt+=a[l];
					a[r]-=a[l];
					l++;
				}
			}
			else{
				if(b[l]==b[r]){
					a[l]-=a[r];
					r--;
				}
				else{
					cnt+=a[r];
					a[l]-=a[r];
					r--;
				}
			}
		}
	}
	cout<<cnt;
	return 0;
} 

