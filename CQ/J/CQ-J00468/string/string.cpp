#include<bits/stdc++.h>
#define int long long
using namespace std;
struct node {
	int a;
	char c;
}b[200005];
const int M=2e5+5;	
int n,a[M],ans=0;
char c[M];
signed main(){
	ios::sync_with_stdio(0); 
	cin.tie(0);	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
	}
		for(int i=0,j=n-1;i<j;){		
			if(c[i]!=c[j]){
				if(a[i]==a[j]){
					ans+=a[i];
					i++;
					j--;
				}else if(a[i]<a[j]){
					ans+=a[i];
					a[j]-=a[i];
					i++;
				}else{
					ans+=a[j];
					a[i]-=a[j];
					j--;
				}
			}else{
				if(a[i]==a[j]){
					i++;
					j--;
				}else if(a[i]<a[j]){
					a[j]-=a[i];
					i++;
				}else{
					a[i]-=a[j];
					j--;
				}
			}
		}
		cout<<ans;
	return 0;
}

