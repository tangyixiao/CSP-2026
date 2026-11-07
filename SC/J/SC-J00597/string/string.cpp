#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false),cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;cin>>n;
	vector<char>A;
	for(int i=1;i<=n;i++){
		int x;char c;
		cin>>x>>c;	
			for(int j=1;j<=x;j++){
				A.push_back(c);
			}
	}
	int mid=A.size()/2+1,j=0,s=0;
//	cout<<mid<<'\n';
	for(int i=mid;i<A.size()&&j<mid;i++,j++){
		if(A[i]!=A[j]){
			s++;
		}
	}
	cout<<s;
	return 0;
}