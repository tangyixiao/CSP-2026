#include<bits/stdc++.h>
using namespace std;
struct str{
	int num,yu;
	string st;
};
vector<int> v;
vector<str> s;
bool cmp(str x,str y){
	if(x.num==y.num){
		return x.st.size()>y.st.size();
	}
	return x.num>y.num;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v.push_back(x);
		string s1,s2;
		int cnt=0;
		while(x>0){
			s2.push_back(x%2);
			x/=2;
		}
		for(int j=s2.size()-1;j>=0;j--){
			s1.push_back(s2[j]);
			if(s2[j]=='1'){
				cnt++;
			}
		}
		s.push_back({cnt,v[i],s1});
	}
	sort(s.begin(),s.end(),cmp);
	int cnt=s[0].yu;
	for(int i=1;i<m;i++){
		cnt&=s[i].yu;
	}
	cout<<cnt;
	return 0;
}