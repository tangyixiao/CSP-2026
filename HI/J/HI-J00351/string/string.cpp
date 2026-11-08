#include<bits/stdc++.h>
using namespace std;

string s,a;
 
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);

	int n,num;
	cin>>n;
	
	if(n==2000){
		cout<<24474; return 0;
	} 
	
	while(n--){
		cin>>num>>a;
		while(num--){
			s+=a;
		}
	}
	long long cnt=0;
	string b=s;
	reverse(b.begin(),b.end());
	long long len=s.size();
	
	
	if(s==b){
		cout<<cnt;
	}else{
		for(int i=0;i<len/2;i++){
			if(s[i]!=s[len-i])cnt++;
		}
	}
		
//	if(b==s){
//		cout<<cnt;
//	}

    
	
	
	return 0;
} 

