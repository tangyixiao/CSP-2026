#include<bits/stdc++.h>
using namespace std;
int n;
long long a,ans;
char c;
string s;
bool check(string st){
	string st2="";
	int len=st.size()-1;
	for(int i=len;i>=0;i--){
		st2+=st[i];
	}
	return (st2==st);
}
string tu(string d){
	string s2="";
	int len=d.size()-1;
	for(int i=len;i>=0;i--){
		s2+=d[i];
	}
	return s2;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	while(n--){
		cin>>a>>c;
		while(a--) s+=c;
	}
	if(check(s)) cout<<0;
	else{
		if(s.size()%2==1){
			int cnt=0;
			string sub1=s.substr(0,s.size()/2),sub2=s.substr(s.size()/2+1);
			for(int i=0;i<sub1.size();i++){
				if(sub1[i]!=sub2[i]) cnt++;
			}
			cout<<cnt;
		}else{
			int cnt=0;
			string sub1=s.substr(0,s.size()/2),sub2=s.substr(s.size()/2+1);
			for(int i=0;i<sub1.size();i++){
				if(sub1[i]!=sub2[i]) cnt++;
			}
			cout<<cnt;
		}
		
	}
}
