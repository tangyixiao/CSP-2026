#include<bits/stdc++.h>
using namespace std;
const int N =2e5+10;
int val[N];
long long a[N];
int n;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		char b;
		cin>>b;
		val[i]=b-96;
	}
	int i=1,j=n;
	long long ans=0;
	while(i!=j){
		if(val[i]!=val[j]){
			if(a[i]<a[j]){
				ans+=a[i];
				a[j]-=a[i];
				i++;
			}
			else if(a[i]==a[j]){
				ans+=a[i];
				i++;
				j--;
			}
			else{
				ans+=a[j];
				a[i]-=a[j];
				j--;
			}
		}
		else{
			if(a[i]<a[j]){
				a[j]-=a[i];
				i++;
			}
			else if(a[i]==a[j]){
				i++;
				j--;
			}
			else{
				a[i]-=a[j];
				j--;
			}
		}
	}
	cout<<ans;
	return 0;
}

