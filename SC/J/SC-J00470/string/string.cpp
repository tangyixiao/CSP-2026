#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,end,start=0;
	cin>>n;
	end=n-1;
	long long a[n];
	long long repair=0;
	char b[n];
	for(int i=0;i<n;i+=1){
		cin>>a[i]>>b[i];
	}
	while(start!=end){
		if(b[start]==b[end]){
			if(a[start]>=a[end]){
				a[start]-=a[end];
				end-=1;
			}
			else if(a[start]<a[end]){
				a[end]-=a[start];
				start+=1;
			}
		}
		else{
			if(a[start]>=a[end]){
				repair+=a[end];
				a[start]-=a[end];
				end-=1;
			}
			else{
				repair+=a[start];
				a[end]-=a[start];
				start+=1;
			}
		}
	}
	cout<<repair;
}