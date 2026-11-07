#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long dss=0;
	long long n;
	cin>>n;
	long long a[n];
	char b[n];
	bool sf=1;
	long long dqs=0;
	long long zh=0;
	char t;
	for(long long i=0;i<n;i++){
		cin>>a[i]>>b[i];
		zh+=a[i];
		dqs+=a[i];
		dqs%=2;
		if(i==0){
			t=b[i];
		}
		else{
			if(b[i]!=t){
				sf=0;
			}
		}
	}
	if(sf){
		cout<<0;
	}
	else{
		if(dqs%2==0){
			for(long long i=0,j=n-1;i<j;){
				while(a[i]>0&&a[j]>0){
					if(b[i]!=b[j]){
						dss++;
					}
					a[i]--;
					a[j]--;
				}
				if(a[i]==0){
					i++;
				}
				if(a[j]==0){
					j--;
				}
			}
		}
		else{
			zh/=2;
			zh++;
			for(long long i=0;i<n;i++){
				if(zh<=a[i]){
					a[i]--;
					break;
				}
				else{
					zh-=a[i];
				}
			}
			for(long long i=0,j=n-1;i<j;){
				while(a[i]>0&&a[j]>0){
					if(b[i]!=b[j]){
						dss++;
					}
					a[i]--;
					a[j]--;
				}
				if(a[i]==0){
					i++;
				}
				if(a[j]==0){
					j--;
				}
			}
		}
		cout<<dss;
	}
	return 0;
}
