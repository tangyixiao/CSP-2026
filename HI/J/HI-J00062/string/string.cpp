#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long a[200005];
	char b[200005];
	long long cnt=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	long long i=1,j=n;
	while(i!=j){
		if(b[i]==b[j]){
			if(a[i]>=a[j]){
				a[i]-=a[j];
				j--;
			}
			else{
				a[j]-=a[i];
				i++;
			}
		}
		else{
			if(a[i]>=a[j]){
				a[i]-=a[j];
				cnt+=a[j];
				j--;
			}
			else{
				a[j]-=a[i];
				cnt+=a[i];
				i++;
			}
		}
	}
	cout<<cnt;
	return 0;
}
