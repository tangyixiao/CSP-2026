#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
   	long long  n;cin>>n;
   	long long m=0;
   	char c;
   	long long len=0;
   	for(int i=1;i<=n;i++){
   		cin>>m>>c;
   		for(int j=1;j<=m;j++){
   				s+=c;
		   }
		len+=m;
	}

	long long cnt=0;
	
	long long fff=len;
	for(int i=1;i<=len/2;i++){
		if(s[fff]!=s[i]){
			cnt++;
			
		}
		
		fff--;
	}

	cout<<cnt;

}
