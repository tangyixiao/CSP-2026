#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool ishuiwen(string x){
	int l=x.size();
	for(int i=1;i<=(l+1)/2;i++){
		if(x[i]!=x[l+1-i]){
			return false; 
		}
	}
//	string x2;
//	int p=1;
//	for(int i=x.size();i>=1;i--){
//		x2[p]=x[i];
//	}
//	for(int i=1;i<=(x.size()+1)/2;++i){
//		if(x[i]!=x2[i]){
//			return false;
//		}
//	}
	return true;
}

//µÚ¶þÌâstring
ll n,a,firsta,q=1,p=1,ans;
string s,s2,c,c2;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	bool same=true;
	for(int i=1;i<=n;i++){
		cin>>a>>c[i];
		if(i==1){
			firsta=a;
		}
		if(a!=firsta){
			same=false;
		}
		for(int i=1;i<=a;i++){
			s[q]=c[i];
			q++;
		}
	}
	if(same==true){
		if(ishuiwen(c)==true){
			cout<<"0";
			return 0;
		}
		for(int i=c.size();i>=1;i--){
			c2[p]=c[i];
		}
		for(int i=1;i<=(c.size()+1)/2;++i){
			if(c[i]!=c2[i]){
				ans++;
			}
		}
		cout<<ans*firsta;
		return 0;
	}
	if(ishuiwen(s)==true){
		cout<<"0";
		return 0;
	}
	for(int i=s.size();i>=1;i--){
		s2[p]=s[i];
	}
	for(int i=1;i<=(s.size()+1)/2;++i){
		if(s[i]!=s2[i]){
			ans++;
		}
	}
	cout<<ans;
 	return 0;
}
