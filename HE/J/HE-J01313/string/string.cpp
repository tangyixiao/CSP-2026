#include<bits/stdc++.h>
using namespace std;
char s[2000001];
int siz;
int func(){
	char s1[2000001];
	int cnt=0;
	for(int i=siz-1;i>=0;i--){
		s1[cnt]=s[i];
		cnt++;
	}
	int ans=0;
	for(int i=0;i<siz/2;i++){
		if(s[i]!=s1[i+1]){
			ans++;
		}
	}
	return ans;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    int n;
    cin>>n;
    if(n<=1){
    	cout<<0<<endl;
    	return 0;
	}
    int a;
    char c;
    int cnt=0;
    for(int i=1;i<=n;i++){
    	cin>>a>>c;
    	for(int j=1;j<=a;j++){
    		s[cnt]=c;
    		cnt++;
		}
	}
	siz=cnt+1;
	cout<<func()<<endl;
	return 0;
}
