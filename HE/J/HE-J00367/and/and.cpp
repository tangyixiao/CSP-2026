#include <bits/stdc++.h>
using namespace std;
#define LL long long
const int N=2e5+5;
LL n,m;
string num[N],ans="0";
int Cmp(string A,string B){
	if(A==B)return 0;
	if(A.length()>B.length())return 1;
	if(A.length()<B.length())return -1;
	for(int i=0;i<A.length();i++){
		if(A[i]>B[i])return 1;
		else if(A[i]<B[i])return -1;
	}
	return 0; 
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>num[i];
	for(int i=1;i<=n;i++){
		if(Cmp(num[i],num[i+1])==1){
			if(Cmp(ans,num[i])==-1)ans=num[i];
		}
	}
	if(m==1){cout<<ans<<endl;return 0;}
	cout<<num[n/2+1]<<'\n'; 
	return 0;
}
