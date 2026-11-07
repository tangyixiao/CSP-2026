#include<bits/stdc++.h>
using namespace std;
long long n;
long long a[200010],sm;
char s[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>s[i];
	}
	int l=n;
	int r=1;
	while(l>=r){
		if(s[r]!=s[l]){
			sm+=min(a[r],a[l]);
		}
		if(a[r]>a[l]){
			a[r]-=a[l];
			l--;
		}else{
			if(a[r]==a[l]){
				r++;
				l--;
			}else{
				a[l]-=a[r];
				r++;
			}
		}
	}
	cout<<sm; 
	return 0;
} 