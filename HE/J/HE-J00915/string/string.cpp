#include<bits/stdc++.h>
using namespace std;
int n;
string s="";
long long ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		char c;
		cin>>a>>c;
		for(int j=1;j<=a;j++){
			s+=c;
		}
	}
	int l=s.size();
	for(int i=0;i<l;i++){
		for(int j=l-1;j>0;j--){
			if(s[i]==s[j]){
				continue;
			}
			else{
				s[j]=s[i];
				ans++;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
