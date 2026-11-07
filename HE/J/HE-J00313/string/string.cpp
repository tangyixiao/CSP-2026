#include<bits/stdc++.h>
using namespace std;
int n;
int a[200010];
char s[200010];
long long ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>s[i];
	} 
	int l=1,r=n;
	while(l<r){
		int i=a[l],j=a[r];
		if(s[l]!=s[r]){
			ans+=min(i,j);
		}
		if(i<j){
			a[r]-=i;
			l++;
		}else if(i>j){
			a[l]-=j;
			r--;
		}else if(i==j){
			r--;
			l++;
		}
	}
	cout<<ans;
}
