#include<bits/stdc++.h>
using namespace std;
long long n,a[220000],sum,ans,w=0;
char b[220000];
bool f;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		ans+=a[i];
	}
	if(ans%2==1){
		f=1;
	} 
	long long x=1,y=n;
	while(w<=ans/2){
		if(w+a[x]<=ans/2){
			w+=a[x];
			//aabbc
			while(a[x]>=a[y]){
				a[x]-=a[y];
				if(b[x]!=b[y]){
					sum+=a[y];
				}
				y--;
			}
			if(b[x]!=b[y]){
				sum+=a[x];
			}
			a[y]-=a[x];
			x++;
		}else{
			if(y==x){
				break;
			}
			while(y>x){
				if(b[x]!=b[y]){
					sum+=a[y];
				}
				y--;
			}
			break;
		}
	} 
	cout<<sum;
	return 0;
}