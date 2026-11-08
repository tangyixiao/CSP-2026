#include<bits/stdc++.h>
using namespace std;
long long n,a,q,sum,ans;
char c;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>c;
		sum+=a;
		for(int j=0;j<a;j++){
			s[q]=c;
			q++;
		}
	}
	for(int i=0;i<sum/2;i++){
		if(s[i]!=s[sum-1]) ans++;	
	}
	cout<<ans;
	return 0;
}
