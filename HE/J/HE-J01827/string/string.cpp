#include<bits/stdc++.h>
using namespace std;
int n,s[300001];
long long ans=0;
char c[300001];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i]>>c[i];
	}
	int cnt=n;
	for(int i=1;i<=(n+1)/2;i++){
		while(s[i]>0){	
			if(s[i]==s[cnt]&&c[i]!=c[cnt]){
				ans+=s[i];
				s[i]=0,s[cnt]=0;
				cnt--;
			}else if(s[i]==s[cnt]&&c[i]==c[cnt]){
				s[i]=0,s[cnt]=0;
				cnt--;
			}else if(s[i]>s[cnt]&&c[i]==c[cnt]){
				s[i]=s[i]-s[cnt];
				cnt--;
			}else if(s[i]>s[cnt]&&c[i]!=c[cnt]){
				ans+=s[cnt];
				s[i]=s[i]-s[cnt];
				cnt--;
			}else if(s[i]<s[cnt]&&c[i]==c[cnt]){
				s[cnt]=s[cnt]-s[i];
				i++;
			}else if(s[i]<s[cnt]&&c[i]!=c[cnt]){
				ans+=s[i];
				s[cnt]=s[cnt]-s[i];
				i++;
			}
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
	
}
