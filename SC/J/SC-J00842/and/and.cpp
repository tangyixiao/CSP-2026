#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int and2(int a,int b){
	string stra="",strb="";
	while(a){
		stra=to_string(a%2)+stra;
		a/=2;
	}
	while(b){
		strb=to_string(b%2)+strb;
		b/=2;
	}
	int ans=0;
	for(int i=min(stra.size(),strb.size())-1;i>=0;i--){
		if(stra[i]=='1'&&strb[i]=='1')ans+=pow(2,i);
	}
	return ans;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);
	int n,m;
	cin>>n>>m;
	vector<int>A(n);
	for(int i=0;i<n;i++){cin>>A[i];}
	sort(A.begin(),A.end());
	if(m==n){
		int num=A[0];
		for(int i=0;i<n;i++){
			num=and2(num,A[i]);
		}
		return cout<<num,0;
	}
	if(m==1){
		return cout<<A[n-1],0;
	}
	int ans=A[n-1];
	for(int i=0;i<m;i++){
		ans=and2(ans,A[n-i-1]);
	}
	cout<<ans;
	return 0;
}