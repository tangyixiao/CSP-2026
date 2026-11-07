#include<bits/stdc++.h>
using namespace std;
long long sum;
int n,x;
string s;
char in;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x>>in;
		while(x--){
			s+=in;
		}
	}
	cout<<s<<endl;
	for(int i=0;i<s.size()/2;i++) if(s[i]!=s[s.size()-i-1]) sum++;
	cout<<sum;
	return 0;
}
