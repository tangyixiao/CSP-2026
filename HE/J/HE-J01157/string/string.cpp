#include<bits/stdc++.h>
using namespace std;
long long n, a, res=0, ans=0;
string s;
char c;
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin>>n;
	while(n--){
		cin>>a>>c;
		res+=a;
		for(int i=0; i<a; i++){
			s+=c;
		}
	}
	if(res%2==0){
		for(int i=0, j=s.size()-1; i<s.size()/2, j>=s.size()/2; i++, j--){
			if(s[i]!=s[j]){
				ans++;
			}
		}
	}else{
		for(int i=0, j=s.size()-1; i<s.size()/2, j>s.size()/2; i++,j--){
			if(s[i]!=s[j]){
				ans++;
			}
		}
	}
	cout<<ans;
	return 0;
}
