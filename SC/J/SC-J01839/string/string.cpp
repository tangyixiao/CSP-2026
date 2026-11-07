#include <bits/stdc++.h> 
using namespace std;
int n,le;
const int N=1e9;
int a,cn,mi=INT_MAX;
char c;

string s;
bool t3;
bool hw(string s){
	bool t=true;
	for(int l=0,r=le-1;l<=r;l++,r--){
		if(s[l]!=s[r]){
			cn++;
			t=false;
		}
	}
	if(t)return true;
	else return false;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	int x,ty=1;
	char tc;
	bool tt=true;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		if(i>=2&&c!=tc)tt=false;
		x=a;
		tc=c;
		for(int i=1;i<=a;i++){
			s+=c;
		}
		le+=a;
	}
	if(tt||hw(s)){
		cout<<0;
		return 0;
	}
	if(t3&&tc==2){
		cout<<mi;
	}
	cout<<cn;
	return 0;
}