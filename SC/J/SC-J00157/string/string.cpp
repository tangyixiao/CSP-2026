//部分分版本
#include<bits/stdc++.h>
using namespace std;
long long n,ans,a[200010],l=1;
char c[200010];
string s,s1;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		if(i>1&&(a[i]!=a[i-1])){
			l=0;
		}
	}
	if(l==0){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=a[i];j++){
				s+=c[i];	
			}	
		}	
	}
	//cout<<s<<"\n";
	if(l==1){
		for(int i=1;i<=n;i++){
			s1+=c[i];
		}
		for(int i=0;i<=s1.size()/2;i++){
			if(s1[i]!=s1[s1.size()-1-i]){
				ans+=a[i];
			}
		}
	//	cout<<s1<<"\n";
	}
	for(int i=0;i<=s.size()/2;i++){
		if(s[i]!=s[s.size()-1-i]){
			ans++;
		}
	}
	cout<<ans;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
} 