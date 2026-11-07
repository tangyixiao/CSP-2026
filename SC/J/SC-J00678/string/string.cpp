#include <bits/stdc++.h>
using namespace std;

int n, a[200000], ans=0, backward=1, forward=0;
char c[200000], d[32767];

int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin.tie(NULL);
	cin>>n;
	for(int i=0;i<n;i++)cin>>a[i+forward]>>c[i+forward];
	for(int i=0;i<n/2+1;i++){
		if(a[i+forward]==a[n-i-backward]&&c[i+forward]!=c[n-i-backward])ans+=a[i+forward];//对称时 
		if(a[i+forward]>a[n-i-backward]){//前多于后 
			if(c[i+forward]!=c[n-i-backward])ans+=a[n-i-backward];
			for(int j=a[i+forward];;){
				if(a[n-i-backward]<=j){
					j-=a[n-i-backward];
					backward++;
					if(c[i+forward]!=c[n-i-backward]&&j>=a[n-i-backward])ans+=a[n-i-backward];
				}
				else{
					a[n-i-backward]-=j;
					if(a[n-i-backward]>0)backward--;
					if(c[i+forward]!=c[n-i-backward])ans+=a[n-i-backward];
				}
			}
		}
		if(a[i+forward]<a[n-i-backward]){//后多于前 
			if(c[i+forward]!=c[n-i-backward])ans+=a[i+forward];
			for(int j=a[n-i-backward];;){
				if(a[i+forward]<=j){
					j-=a[n-i-backward];
					forward++;
					if(c[i+forward]!=c[n-i-backward]&&j>=a[i+forward])ans+=a[i+forward];
				}
				else{
					a[i+forward]-=j;
					if(a[i+forward]>0)forward--;
					if(c[i+forward]!=c[n-i-backward])ans+=a[i+forward];
				}
			}
		}
	}
	cout<<ans;
	return 0;
}