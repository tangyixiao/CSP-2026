#include<bits/stdc++.h>
using namespace std;
int a[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,i=1,aok=1,sok=1;
	cin>>n>>m;
	if(m>2)sok=0;
	while(i<=n){
		cin>>a[i];
		if(a[i]<a[i-1])aok=0;
		
		i++;
	}
	i=1;
	if(aok){
		int j=1,ans=0;
		while(i<=m){
			
			while(a[j]<=i&&j<=n){
				ans++;
				j++;
			}
			
			
			cout<<ans<<" ";
			i++;
		}
		return 0;
	}
	if(sok){
		int s1=0,s2=0;
		
		while(i<=n){
			if(a[i]==a[n]&&a[i]==1)s1++;
			else if(a[i]==a[n]&&a[i]==2)s2++;
			else{
				s1++;
				s2++;
			}
			i++;
		}
		cout<<s1<<" "<<s2;
	}
	

	return 0;
}
//RP++