#include<bits/stdc++.h>
using namespace std;
int n;
long long sum=0;
long long a[200500];
char b[200500];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>b[i];
	int i=1,j=n;
	while(i<j){
		if(b[i]==b[j]){
			if(a[i]>a[j]){
				a[i]-=a[j];
				j--;
			}else{
				a[j]-=a[i];
				i++;
			}
		}else{
			if(a[i]>a[j]){
				a[i]-=a[j];
				sum+=a[j];
				j--;
			}else{
				a[j]-=a[i];
				sum+=a[i];
				i++;
			}
		}
	}
	cout<<sum;
	return 0;
}