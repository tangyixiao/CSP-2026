#include<bits/stdc++.h> 
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    string S;
    long long n,ans=0;
    cin>>n;
    for(long long i=1;i<=n;i++){
    	long long a;
    	string s;
    	cin>>a>>s;
    	for(long long i=1;i<=a;i++){
    		S+=s;
		}
	}long long l=sizeof(S);
	for(long long i=0;i<sqrt(l);i++){
		if(S[i]!=S[l-1-i]){
			ans++;
		}
	}cout<<ans;
    return 0;
}
