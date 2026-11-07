#include<bits/stdc++.h>
using namespace std;

string str;
long long a,len,cnt,ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>a;
	for(int i=0;i<a;i++){
		long long num;
		string cha;
		cin>>num>>cha;
		len+=num;
		while(num--){
			str+=cha;
		}
	}
	long long mid = len/2+1;
	if(len%2!=0){
		for(long long i=0;i<mid-1;i++){
			if(str[i]!=str[len-i-1]){
				ans++;
			}
		}
	}else{
		for(long long i=0;i<mid-1;i++){
			if(str[i]!=str[len-i-1]){
				ans++;
			}
		}
	}
	
	cout<<ans;
	return 0;
}