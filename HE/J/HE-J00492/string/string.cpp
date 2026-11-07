#include<bits/stdc++.h>
using namespace std;
struct node{
	int n;
	char s;
};
node a[200050];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].n>>a[i].s;
	}
	int l=1,r=n;
	long long ans=0;
	while(l<=r){
		int n1=a[l].n,n2=a[r].n;
		char s1=a[l].s,s2=a[r].s;
		if(s1==s2){
			if(n1>n2){
				r--;
				a[l].n-=n2;
			}
			else if(n1<n2){
				l++;
				a[r].n-=n1;
			}
			else{
				r--;
				l++;
			}
		}
		else{
			if(n1>n2){
				ans+=n2;
				r--;
				a[l].n-=n2;
			}
			else if(n2>n1){
				ans+=n1;
				l++;
				a[r].n-=n1;
			}
			else{
				ans+=n1;
				r--;
				l++;
			}
		}
		//cout<<l<<" "<<r<<" "<<ans<<endl;
	}
	cout<<ans;
	return 0;
}
