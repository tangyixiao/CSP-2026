#include <bits/stdc++.h>
using namespace std;
long long c[100100];
char x[100100];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,len=0;
	cin>>n;
	for(long i=1;i<=n;i++){
		cin>>c[i]>>x[i];
		len+=c[i];
	}
	long long ans=0;
	long long ss;
	long long l=0,r=len-1; 
	while(l<r){
		if(x[l]!=x[r]){
			ss=min(c[l],c[r]);
			ans+=ss;
			c[l]-=ss;
			c[r]-=ss;
			if(c[l]==0){
				l++;
			}
			if(c[r]==0){
				r--;
			}
		}else{
			ss=min(c[l],c[r]);
			c[l]-=ss;
			c[r]-=ss;
			if(c[l]==0){
				l++;
			}
			if(c[r]==0){
				r--;
			}
		}
	}
	cout <<ans<<endl;
	return 0;
}

