#include<bits/stdc++.h>
using namespace std;
long long a[200005];
char c[200005];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    int n;
    cin>>n;
    long long cnt=0;
    int i=1;
    while(i<=n){
    	cin>>a[i]>>c[i];
    	while(a[i]--){
    		s+=c[i];
		}
    	i++;
	}
	char f=s[s.size()-1];
	for(i=0;i<s.size()/2;i++){
		if(s[i]!=f) cnt++;
		f=s[s.size()-i-1];
	}
	cout<<cnt;
	return 0;
}
