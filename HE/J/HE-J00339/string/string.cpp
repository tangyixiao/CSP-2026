#include<bits/stdc++.h>
using namespace std;
string s,s1;
inline void huiwen(string a){
	s1.clear();
	for(int i=a.size()-1;i>=0;i--){
		s1+=a[i];
	}
}
long long n,a;
unsigned long long sum=0;
char c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n;
	while(n--){
		cin>>a>>c;
		while(a--){
			s+=c;
		}
	}
	huiwen(s);
	if(s1==s){
		cout<<0;
		return 0;
	}
	for(int i=0;i<s.size()/2;i++){
		if(s[i]!=s[s.size()-i-1]){
			sum++;
		}
	}
	cout<<sum;
return 0;
}
