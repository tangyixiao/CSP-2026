#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
    long long a1,n,n1,ans=0;
    string as,aq="",az="";
    cin>>n;
    int j=0;
    for(int i=1;i<=n;i++){
    	long long s;
    	cin>>s;
    	a1+=s;
    	string a;
    	cin>>a;
    	while(s--){
        as+=a;
	}
		}
		long long l=as.size();
    if(n%2==0) n1=l/2;
    else n1=l/2+1;
    for(int i=0;i<l;i++){
       if(j>n1){az+=as[i];}
	   else aq+=as[i];
	   j++;
	}
	while(n1--){
		if(n1==l/2+1) continue;
        if(aq[n1-1]==az[n-n1]) continue;
        else ans++;
	}
	cout<<ans;
}