#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int l;
	cin>>l;
	vector<pair<char,int>>s;
	for(int i=0;i<l;i++){
		int len;
		char c;
		cin>>len>>c;
		s.push_back({c,len});
	}
	int idxf=0,idxb=s.size()-1;
	long long cnt=0;
	while(idxf<idxb){
		if(s[idxf].first==s[idxb].first){
			if(s[idxf].second<s[idxb].second){
				s[idxb].second-=s[idxf].second;
				idxf++;
			}
			else if(s[idxf].second>s[idxb].second){
				s[idxf].second-=s[idxb].second;
				idxb--;
			}else{
				idxf++;
				idxb--;
			}
		}
		else{
			if(s[idxf].second<s[idxb].second){
				s[idxb].second-=s[idxf].second;
				cnt+=s[idxf].second;
				idxf++;
			}
			else if(s[idxf].second>s[idxb].second){
				s[idxf].second-=s[idxb].second;
				cnt+=s[idxb].second;
				idxb--;
			}else{
				cnt+=s[idxf].second;
				idxf++;
				idxb--;
			}
		}
	}
	cout<<cnt;
}
