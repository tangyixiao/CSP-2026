#include<bits/stdc++.h>
using namespace std;
int n,l[200010],sl,ind=1;
char c[200000010],c2[200000010];
int main(){
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		int ll;
//		char cc;
//		cin>>ll>>cc;
//		if(cc==c[ind-1]){
//			l[ind-1]+=ll;
//		}else{
//			l[ind]=ll;
//			c[ind]=cc;
//			ind++;
//		}
//		sl+=ll;
//	}
//	for(int i=1;i<=n;i++)cout<<l[i]<<" ";
////	for(int i=1;i<=n;i++){
////		
////	}
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int ll;
		char cc;
		cin>>ll>>cc;
		for(int i=ind;i<=ll;i++)c[i]=cc;
		ind=ll+ind;
	}
	int ans=0;
	for(int i=1;i<=n/2;i++){
		if(c[i]!=c[n-i+1])ans++;
	}
	cout<<ans;
	return 0;
}
