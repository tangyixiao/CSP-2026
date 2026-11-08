#include<bits/stdc++.h>
using namespace std;
map<int,int> cnt;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,cnt2=0;
	cin>>n>>m;
	vector<int> vec1;
	vector<string> vec,vec2;
	int mx=0;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		vec1.push_back(x);
		mx=max(mx,x);
	}
	int len=0;
	for(int i=0;i>=0;i++){
		if(mx/(pow(2,i))<1){
			len=i;
			break;
		}
	}
	for(int i=1;i<=n;i++){
		int x=vec1[i];
		string s1;
		for(int j=len-1;j>=0;j--){
			if(x&(1<<j)==1){
				s1+='1';
			}else{
				s1+='0';
			}
		}
		vec.push_back(s1);
		cnt2++;
	}
	for(int i=0;i<len;i++){
		for(int j=0;j<cnt2;j++){
			if(vec[j][i]=='1'){
				cnt[i]++;
			}
		}
	}
	for(auto p:cnt){
		if(p.second>=m){
			vector<string> cc;
			for(int i=0;i<vec.size();i++){
				if(vec[i][p.first]=='1'){
					cc.push_back(vec[i]);
				}
			}
			vec=cc;
		}
	}
	string as;
	for(int i=0;i<len;i++){
		for(int j=0;j<vec.size();j++){
			if(vec[j][i]=='0'){
				as+='0';
				break;
			}
		}
		as+='1';
	}
	int ans=0;
	for(int i=len-1;i>=0;i--){
		if(as[i]=='1'){
			ans+=pow(2,len-i-1);
		}
	}
	cout<<ans;
	return 0;
}
