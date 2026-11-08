#include<bits/stdc++.h>
using namespace std;

int zf[30];
long long n,kind,ans,btb;
long long a[200005];
string s;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int in=1;in<=n;in++){
		char c;
		cin>>a[in]>>c;
		s+=c;
		zf[c-'a']++;
		if(zf[c-'a']==1){
			kind++;
		}
		btb+=a[in];
		btb%=2;
	}
	if(kind==1){
		cout<<"0";
		return 0;
	}
	string ys="";
	for(int ysi=s.size()-1;ysi>=0;ysi--){
		ys+=s[ysi];
	}
	if(ys==s){
		cout<<"0";
		return 0;
	}
	int len=s.size()-1;
	for(int i=0;i<s.size()/2;i++){
		if(s[i]!=s[len+1-i]){
			ans+=a[i+1];
//			cout<<"»»"<<s[i]<<"\n"<<"¹²"<<a[i+1]<<"¸ö\n\n";
		}
	}
	cout<<ans;
	return 0;
} 
