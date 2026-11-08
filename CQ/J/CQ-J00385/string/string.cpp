#include<bits/stdc++.h>
#define ll long long
#define I using
#define AK namespace
#define cspJ std
I AK cspJ;
ll quick_cin_math(){
	ll the_number=0;
	string a_num;
	cin>>a_num;
	for(ll i=0;i<a_num.size();i++){
		the_number=the_number*10+a_num[i]-'0';
	}
	return the_number; 
}

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	ll n,ans=0;
	n=quick_cin_math();
	vector<pair<char,ll>>str;
	while(n--){
		ll a;
		char c;
		a=quick_cin_math();
		cin>>c;
		str.push_back({c,a});
	}
	int l=0,r=str.size()-1;
	while(l<r){
		if(str[l].first==str[r].first){
			if(str[l].second>str[r].second){
				str[l].second-=str[r].second;
				r--;
			}
			else{
				if(str[l].second<str[r].second){
					str[r].second-=str[l].second;
					l++;
				}
				else{
					l++;
					r--;
				}
			}
		}
		else{
			if(str[l].second>str[r].second){
				ans+=str[r].second;
				str[r].first=str[l].first;
			}
			else{
				ans+=str[l].second;
				str[l].first=str[r].first;
			}
		}
	}
	cout<<ans<<'\n';
	return 0;
}
