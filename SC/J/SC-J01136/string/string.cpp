#include<bits/stdc++.h>
using namespace std;
int n;
int a;
char c;
string s;
int main(){
freopen("string.in","r",stdin);
freopen("string.out","w",stdout);
cin>>n;
while(n--){
	cin>>a>>c;
	while(a--){
		s+=c;
	}
}	
int len=s.size();
int ans=0;
int k=0;
while(k<=len/2-1){
if(s[k]!=s[len-k-1]){
    	ans++;
		}
	k++;
}
	
	cout<<ans;
	return 0;
}