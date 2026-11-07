#include<bits/stdc++.h>
using namespace std; 
struct qq{
	int num;
	char c;
}a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	long long sum=0; 
	string s;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].num>>a[i].c;
		while(a[i].num--){
			s+=a[i].c;
		}
	}
	for(int i=0,j=s.size()-1;i<s.size()/2&&j>s.size()/2;i++,j--){
		if(s[i]!=s[j]){
			sum++;
		}	
	}
	cout<<sum;
}

