#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;cin>>n;
	vector<pair<int,char> >A(n+1);
	for(int i=1;i<=n;i++){
		int a;char c;cin>>a>>c;
		A[i].first=a,A[i].second=c;
	}
	int l=1,r=n;
	long long ans=0;
	while(l<r){
		if(A[l].second==A[r].second){
			if(A[l].first>A[r].first){
				A[l].first-=A[r].first;
				r--;
			}else if(A[l].first==A[r].first){l++,r--;
			}else{
				A[r].first-=A[l].first;
				l++;
			}
		}else{
			if(A[l].first>A[r].first){
				ans+=A[r].first;
				A[l].first-=A[r].first;
				r--;
			}else if(A[l].first==A[r].first){
				ans+=A[r].first;
				l++,r--;
			}else{
				ans+=A[l].first; 
				A[r].first-=A[l].first;
				l++;
			}
		}
	}
	cout<<ans;
	return 0;
}