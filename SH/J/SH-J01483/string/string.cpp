#include<bits/stdc++.h>
using namespace std;
long long n,ans=0;
vector<pair<long long,char> > ve;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	long long s;
	char c;
	for(long long i=0;i<n;i++){
		cin>>s>>c;
		ve.push_back({s,c});
}
	long long l=0,r=n-1;
	while(l<r){
		long long u=ve[l].first;
		long long v=ve[r].first;
		char c1=ve[l].second;
		char c2=ve[r].second;
		if(c1==c2){
			if(u<v){
				ve[r].first=ve[r].first-u;
				ve[l].first=0;
				l++;
			}else if(u==v){
				ve[l].first=0;
				ve[r].first=0;
				l++;
				r--;
			}else if(u>v){
				ve[l].first=ve[l].first-v;
				ve[r].first=0;
				r--;
			}
		}
		if(c1!=c2){
			if(u>v){
				ans+=v;
				ve[l].first=ve[l].first-v;
				ve[r].first=0;
				r--;
			}else if(u==v){
				ans+=u;
				ve[l].first=0;
				ve[r].first=0;
				l++;
				r--;
			}else if(u<v){
				ans+=u;
				ve[r].first=ve[r].first-u;
				ve[l].first=0;
				l++;
			}
		}
	}
	cout<<ans;
	return 0;
} 


