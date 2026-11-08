#include<bits/stdc++.h>
using namespace std;
bool isp(string s,string k);
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int t;
	cin>>t;
	string s;
	while(t--){
		int a;
		char ch;
		cin>>a>>ch;
		string n(a,ch);
		s+=n;
	}
	string v=s;
	reverse(v.begin(),v.end());
	if(v==s){
		cout<<0;
		return 0;
	}
	string po=s.substr(0,s.size()/2);
	string l=s.substr(s.size()/2);
	cout<<po<<l;
	if(isp(po,po)&&isp(l,l)){
		int len=po.size();
		int klen=l.size();
		int k=min(len,klen);
		cout<<k;
		return 0;
	}
	string a=s;
	int x=0,y=a.size()-1,cnt=0;
	while(1){
		if(a[x]==a[y]){
			x++;
			y--;
			continue;
		}
		else{
			a[x]=a[y];
			string p=a;
			cnt++;
			if(isp(a,p)){
				break;
			}
		}
	}
	cout<<cnt;
	return 0;
}
bool isp(string s,string k){
	string p=k;
	reverse(p.begin(),p.end());
	if(p==s)return true;
	return false;
}
