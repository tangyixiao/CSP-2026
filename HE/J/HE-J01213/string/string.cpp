#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,ans,sum,cnt;
long long a[200005];
char c[200005];
string s="",s2,s3;
inline int solve(string s1){
	int len=s1.size();

          for(int i=0;i<len/2;i++) {
          	if(s1[i]!=s1[len-i-1])
          	sum++;
		  }

	return sum;
}
signed main(){
	freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
   	cin>>n;
   	for(int i=1;i<=n;i++)
   			cin>>a[i]>>c[i];
   			
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=a[i];j++){
    		s+=c[i];
		}
	}
   	
   	ans=solve(s);
   	cout<<ans;

   		
	
   	
	
   
   	
}
