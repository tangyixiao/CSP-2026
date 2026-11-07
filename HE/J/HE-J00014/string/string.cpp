#include<bits/stdc++.h>
using namespace std;
const int N=2e5+3;
int n,a[N],ans;
char c[N];
string s;
string fan(string str){//·­×ª 
	int len=str.size();
	string stra;
	for(int i=len-1;i>=0;i--){
		stra+=str[i];
	}
	return stra;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			s+=c[i];
		}	
	}
	int ch=s.size();
	if(s==fan(s)){
		cout<<0;
		return 0;
	}else{
		for(int i=0;i<ch/2;i++){
			if(s[i]!=s[ch-1-i]){
				s[ch-1-i]=s[i];
				ans++;
			}
		}
	}
	cout<<ans;
	return 0;
}

