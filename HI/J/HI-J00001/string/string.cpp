#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int t;
long long n;
char a;
string s; 
long long l,r;
long long sum;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	
	cin>>t;
	
	while(t--){
		cin>>n>>a;
		for(int i=1;i<=n;i++){
			s+=a;
		}
	}
	
	r=s.size()-1;
	while(l<r){
		if(s[l]!=s[r]){
			sum++;
		}
		
		l++;
		r--;
	}
	
	cout<<sum;
	
	
	
	
	
	
	
	
	
	
	



	return 0;
}




