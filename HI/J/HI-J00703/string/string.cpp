#include <bits/stdc++.h>
using namespace std;
int main(){
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	
	string s="";
	long long n,a,cnt=0;
	char c;
	cin>>n;
	if(n<=2000){
		for(long long i=1;i<=n;i++){
			cin>>a>>c;
			if(a<=50){
				for(long long j=1;j<=a;j++){
					s=s+c;
				}
			}
			
		}
	}
	

	for(int i=0,j=s.size()-1;i<=(s.size()-1)/2;i++,j--){
		if(s[i]!=s[j]){
			cnt++;
		}
	}
	cout<<cnt;
	
	return 0; 
}
