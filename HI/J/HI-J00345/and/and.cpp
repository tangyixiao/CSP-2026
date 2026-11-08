#include<bits/stdc++.h>
using namespace std;
long long s[200100];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long m,n;
	long long cnt;
	cin>>n>>m;
	if(m==n){
		long long x;
		cin>>x;
		cnt=x;
		for(long long i=1;i<n;i++){
			cin>>x;
			cnt&=x;
		}
		cout <<cnt<<endl;
		return 0;
	}
	for(long long i=0;i<n;i++){
		cin>>s[i];
	}
	if(m==2){
		long long ma=0;
		for(long long i=0;i<n;i++){
			for(long long j=i+1;j<n;j++){
				if((s[i]&s[j])>ma){
					ma=(s[i]&s[j]);
				}
			}
		}
		cout <<ma<<endl;
		return 0;
	}
	if(m==1){
		
		sort(s,s+n);
		cout <<s[n/2]<<endl;
		return 0;
	}
	return 0;
}

