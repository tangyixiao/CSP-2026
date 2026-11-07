#include<bits/stdc++.h>
using namespace std;
int n,cnt,sum,l,r;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		char c;
		cin>>a>>c;
		for(int j=sum;j<sum+a;j++){
			s[j]=c;
		}
		sum+=a;
	}
	l=0,r=sum;
	while(sum--){
		if(l>=r){
			cout<<cnt;
			return 0;
		}
		else if(s[l]!=s[r]){
			s[r]=s[l];
			cnt++;
		}
		l++;
		r=r-1-l;
	}
	return 0; 
}
