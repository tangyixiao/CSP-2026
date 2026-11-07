#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5 +10;
long long  a,num,n,cnt;
string ss,ss2;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	cin>>n;
	for(long long i=0;i<n;i++){
		char s;
		cin>>a>>s;
		for(long long j=0;j < a;j++){
			ss += s;
		}
	}
	num =  ss.size();
	for(long long j=num-1;j >= 0;j--){
			ss2 += ss[j];
	}
	if(ss == ss2){
		cout<<cnt;
		return 0;
	}else{
		for(long long j=0 ;j < num/2;j++){
			if(ss[j] != ss2[j]){
				cnt++;
			}
	}
	}
	cout<<cnt;
	
	

	return 0;
}
