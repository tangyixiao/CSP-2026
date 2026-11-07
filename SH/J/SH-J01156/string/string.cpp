#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n;
	string st="";
	cin>>n;
	for(long long i=0;i<n;i++){
		long long k;
		cin>>k;
		char q;
		cin>>q;
		for(long long j=0;j<k;j++){			
			st+=q;
		}
	}
	long long cnt=0;
	for(long long i=0;i<st.size()/2;i++){
		for(long long j=st.size()-i-1;j>=st.size()/2;j--){
			if(st[i]!=st[j]){
				cnt++;		
			}
			break;
		}
	}
	cout<<cnt;
	return 0;
}
