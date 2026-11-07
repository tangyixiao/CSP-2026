#include<bits/stdc++.h>
using namespace std;

int n;
char c[200005];
long long a[200005];
long long k1[200005],k2[200005];
char c1[200005],c2[2000005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	cin>>n;
	long long t = 0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int j = n;
	int i = 1;
	while(1){
		if(i==j){
			break;
		}
		if(c[i]==c[j]){
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
				t+=a[j];
				a[i]-=a[j];
				j--;
			}
			else{
				t+=a[i];
				a[j]-=a[i];
				i++;
			}
		}
	}
	cout<<t;
	return 0;
}