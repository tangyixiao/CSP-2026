#include<bits/stdc++.h>
using namespace std;
int n;
struct ever{
	long long n;
	char v;
}a[20000005];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].n>>a[i].v; 
	} 
	int l=1;
	int r=n;
	int ans=0;
	if(n==1){
		cout<<ans;
		return 0;
	}
	if(n<=10){
		int l=0;
		int r=0;
		string s;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=a[i].n;j++){
				s+=a[i].v;
				r++; 
			}
		}
		r--;
		while(l<=r){
			if(s[l]==s[r]){
				continue;
			}
			else ans++;
			l++;
			r--;
		}
		cout<<ans;
		return 0;
	}
	while(l<=r){
		int cntl=a[l].n;
		int cntr=a[r].n;
		if(a[l].v==a[r].v){
			int mi=min(cntl,cntr);
			cntl-=mi;
			cntr-=mi;
		}
		else {
			
			int mi=min(cntr,cntl);
			ans+=mi;
			cntl-=mi;
			cntr-=mi;
			
		}
		if(cntl==0){
			l++;
		}
		if(cntr==0){
			r--;
		}
	}
	if(n==2){
		if(a[1].v==a[2].v){
			cout<<ans;
		}
		else cout<<min(a[1].n,a[2].n);
		return 0;
	}
	
	cout<<ans;
	
	return 0;
}
