#include<bits/stdc++.h>
using namespace std;
int n,x;
long long la;
char lc;
long long a[200005];
char c[200005];
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
//  写了1小时终于做出来了，不开龙龙差点没了
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>la>>lc;
		if(i==1){
			x++;
			a[i]=la;
			c[i]=lc;
			continue;
		}
		if(c[x]==lc){
			a[x]+=la;
		}
		else{
			x++;
			c[x]=lc;
			a[x]=la;
		}
	}
	int t=0;
	int m=1;
	for(;;){
		int i=m;
		int j=x-t;
		if(j<=i){
			cout<<ans;
			break;
		}
		if(c[i]==c[j]&&a[i]==a[j]){
			t++;
			m++;
			continue;
		}
		if(c[i]==c[j]){
			if(a[i]<a[j]){
				m++;
				a[j]-=a[i];
			}
			else if(a[i]>a[j]){
				t++;
				a[i]-=a[j];
			}
			else{
				m++;
				t++;
			}
		}
		else{
			if(a[i]<a[j]){
				m++;
				ans+=a[i];
				a[j]-=a[i];
			}
			else if(a[i]>a[j]){
				t++;
				ans+=a[j];
				a[i]-=a[j];
			}
			else{
				m++;
				t++;
				ans+=a[i];
			}
		}
	}
	return 0;
}