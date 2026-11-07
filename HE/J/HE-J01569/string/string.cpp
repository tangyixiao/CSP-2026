#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
string str;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	LL n;
	cin>>n;
	for(int i=0;i<n;i++){
		LL a;
		char b;
		cin>>a>>b;
		for(int i=0;i<a;i++){
			str+=b;
		}
	}
	int w=str.size();
	string str1,str2;
	if(w%2==0){
		for(int i=0;i<w/2;i++){
			str1+=str[i];
			str2+=str[w/2+i];
		}
	}else{
		for(int i=0;i<w/2+1;i++){
			str1+=str[i];
			str2+=str[w/2+i];
		}
	}
	LL ans=0;
	int x=str1.size();
	for(int i=0;i<x;i++){
		if(str1[i]==str2[x-i-1]){
			ans+=0;
		}else{
			ans+=1;
		}
	}
	cout<<ans;
	return 0;
}
