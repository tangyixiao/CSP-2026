#include<bits/stdc++.h>
using namespace std;
long long n,cnt;
string s={""};
char ss[10000010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1,a;i<=n;i++){
		string c;
		cin>>a>>c;
		for(int l=1;l<=a;l++){
			s=s+c;
		}
	}long long k=s.size()-1;
	for(int i=0;i<s.size();i++){
		ss[k]=s[i];
		k--;
	}
	for(int i=0;i<s.size()/2;i++){
		if(ss[i]!=s[i]){
			cnt++;
		}
	}
	cout<<cnt;
	//s.reserve(s.begin(),s.end());
	return 0;
}
//freopen("","r",stdin);
//freopen("","w",stdout); 

