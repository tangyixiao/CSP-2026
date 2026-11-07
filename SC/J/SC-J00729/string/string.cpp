#include<bits/stdc++.h>
using namespace std;
int n;
long long a[200005];
char c[200005];
long long ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int i=1;
	int j=n;
	while(i<j){
		if(c[i]==c[j]){
			if(a[i]>a[j]){
				a[i]-=a[j];
				j--;
			}else if(a[i]==a[j]){
				i++;
				j--;
			}else if(a[i]<a[j]){
				a[j]-=a[i];
				i++;
			}
		}else{
			if(a[i]>a[j]){
				ans+=a[j];
				a[i]-=a[j];
				j--; 
			}else if(a[i]==a[j]){
				ans+=a[i];
				i++;
				j--;
			}else if(a[i]<a[j]){
				ans+=a[i];
				a[j]-=a[i];
				i++;
			}
		}
	}
	cout<<ans;
	return 0;
}