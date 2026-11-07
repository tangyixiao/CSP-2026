#include<bits/stdc++.h>
using namespace std;
string s;
long long n,ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
   cin>>n;
   long long t;
   char m;
   for(long long i=1;i<=n;i++){
    
   	cin>>t>>m;
   	for(long long j=1;j<=t;j++){
   		s+=m;
   		
	   }
   }
   if(s.size()%2==0){
   	for(int i=0;i<=s.size()/2;i++){
   		if(s[i]!=s[s.size()-i-1])ans++;
	   }
   	 }else{
   	 	for(int i=0;i<=(s.size()-1)/2;i++){
   	 		if(s[i]!=s[s.size()-i-1])ans++;
			}
		}
	cout<<ans;
		
  
}
