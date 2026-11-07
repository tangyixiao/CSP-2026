#include<bits/stdc++.h>
using namespace std;
using ll=long long;
constexpr int MAXN=200005;
int n;
ll a,len,h,ans;
char c;
string s;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	char ch;
	bool flag=1;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		if(i==1){
			ch=c;
		}else{
			if(ch!=c){
				flag=0;
			}
		}for(int j=1;j<=a;j++){
			s+=c;
		}
	}if(flag){
		cout<<0;
		return 0;
	}len=s.length();
	h=len/2;
	for(int i=0;i<h;i++){
		if(s[i]!=s[len-i-1]){
			ans++;
		}
	}cout<<ans;
	return 0;
}
