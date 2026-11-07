#include<bits/stdc++.h>
using namespace std;
#define ll  long long 
ll a[200000+1][3];
int main(){
	freopen("string.in","r",stdin);
	freopen ("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		ll ai;
		char ci;
		cin>>ai>>ci;
		a[i][1]=ai,a[i][2]=int(ci)-'a';
	}
	ll ans=0;
	for(int i=1,j=n;i<=j;){
			if(a[i][1]>a[j][1]){
				if(a[i][2]!=a[j][2]){
					ans+=a[j][1];
					a[i][1]-=a[j][1];
					j--;
				}	
				else {
					a[i][1]-=a[j][1];
					j--;
				}
			}
			else if(a[i][1]==a[j][1]){
				if(a[i][2]!=a[j][2]){
					ans+=a[i][1];
					i++,j--;
				}
				else i++,j--; 
			}
			else{
				if(a[i][2]!=a[j][2]){
					ans+=a[i][1];
					a[j][1]-=a[i][1];
					i++;
				}
				else{
					a[j][1]-=a[i][1];
					i++;
				}
			}
	}
	
	cout<<ans<<endl;
	return 0;
}
