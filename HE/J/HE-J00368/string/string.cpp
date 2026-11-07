#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const ll N=2e5+10;
ll n,cnt1,cnt2,s1[N];
char z[N];
string s;
bool check1(){
	ll last=s1[1];
	for(int i=1;i<=n;i++){
		if(s1[i]!=last){
			return 0;
		}
	}
	return 1;
}
void check(string s){
	string s1=s;
	reverse(s.begin(),s.end());
	if(s1==s){
		return;
	}
	ll mid=s.size()/2;
	if(s.size()%2==0){
		//0 mid-1 mid a.size()-1;
		for(ll i=0;i<s.size();i++){
			if(i<=mid-1){
				if(s[i]!=s1[i]){
					cnt1++;
				}
			}else{
				if(s[i]!=s1[i]){
					cnt2++;
				}
			}
		}
	}else{
		for(ll i=0;i<s.size();i++){
			if(i<=mid-1){
				if(s[i]!=s1[i]){
					cnt1++;
				}
			}else if(i>=mid+1){
				if(s[i]!=s1[i]){
					cnt2++;
				}
			}
		}
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(ll i=1;i<=n;i++){
		
		cin>>s1[i]>>z[i];

		for(ll j=1;j<=s1[i];j++){
			s.push_back(z[i]);
		}
	}
	if(check1()){
		string s3;
		for(int i=1;i<=n;i++){
			s3.push_back(z[i]);
		}
		check(s3);
		cout<<min(cnt1,cnt2)*s1[1];
		return 0;
	}
	check(s);
	cout<<min(cnt1,cnt2);
	return 0;
}

