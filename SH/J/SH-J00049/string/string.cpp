#include<bits/stdc++.h>
using namespace std;

long long n,a,ans=0;
char c;
string s;//定义变量 
int main(){
	freopen("string.in","r",stdin);freopen("string.out","w",stdout);
	
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		for(long long j=1;j<=a;j++){
			s+=c;
		}
	}//输入
	
	
	for(long long i=0;i<s.size()/2;i++){
		if(s[i]!=s[s.size()-i-1]){
			ans++;
		}
	}//判断 
    
    cout<<ans;//输出 
	
	fclose(stdin);fclose(stdout);return 0;
} 
