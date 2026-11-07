#include<bits/stdc++.h>
using namespace std;
int n,a,num=1,ans=0;
char s[1000002],c; 
int main(){
	freopen("string4.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		for(int j=num;j<=a+num;j++){
			s[j]=c;
		}
		num+=a; 
	}
	int k=(num+1)/2;
	for(int i=k;i>=1;i--){
		if(s[i]!=s[num-i+1])ans++;
	}
	cout<<ans<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}