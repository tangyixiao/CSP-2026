#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	int n;cin>>n;
	vector< pair<long long,char> > v(1);
	
	for(int i=0;i<n;i++){
		long long num;char le;
		int l=v.size();
		cin>>num>>le;
		
		
		if(le==v[l-1].second){
			v[l-1].first=v[l-1].first+num;
		}
		else v.push_back({num,le});
	}
	
	int l=v.size()-1;
	if(l==1) {
		cout<<0<<endl;
		return 0;
	}
	if(l==2){
		long long a=v[1].first;
		long long b=v[2].first;
		cout<<min(a,b)<<endl;
		return 0;
	}
	long long cnt=0;
	string s="";
	for(int i=1;i<v.size();i++)
		for(int j=1;j<=v[i].first;j++)
			s+=v[i].second;
	for(int i=0;i<s.size()/2;i++){
		if(s[i]!=s[s.size()-1]) cnt++;
	}
	cout<<cnt<<endl;
	
 return 0;
}

