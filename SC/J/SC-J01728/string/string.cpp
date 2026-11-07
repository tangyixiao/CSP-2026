#include<bits/stdc++.h>
using namespace std;
struct te{
	long long x;
	char c;
};
long long ans=0,n;
vector<te>s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	while(n--){
		long long a;
		char b;
		cin>>a>>b;
		s.push_back({a,b});
	}
	long long l=0,r=s.size()-1;
	while(l<r){
		if(s[l].c==s[r].c){
			if(s[l].x>s[r].x){
				s[l].x-=s[r].x;
				r--;
			}
			else{
				s[r].x-=s[l].x;
				l++;
			}
		}
		else{
			if(s[l].x>s[r].x){
				ans+=s[r].x;
				s[l].x-=s[r].x;
				r--;
			}
			else{
				ans+=s[l].x;
				s[r].x-=s[l].x;
				l++;
			}
		}
	}
	cout<<ans;
	return 0;
}