#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string in","r",stdin);
	freopen("string.out","w",stdout);
	int n,cnt=1,ans=0;
	bool q=0,k=0;
	int c1[200005];
	char c2[200005];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>c1[i]>>c2[i];
	}
	for(int i=1;i<=n;i++){       //льеп 1 
		if(c2[i]==c2[n-i+1]){
			q=1;
		}
		else{
			q=0;
			break;
		}
	}
	if(q){
		cout<<ans;
		return 0;
	}                            //over
	for(int i=1;i<=n;i++){       //льеп 2
		if(c1[i]==c1[n-i+1]){
			k=1;
		}
		else{
			k=0;
			break;
		}
	}
	if(k){
		int k=0;
		for(int i=1;i<=(n+1)/2;i++){
			if(c2[i]!=c2[n-i+1]){
				ans+=c1[1];
			} 
		} 
		cout<<ans;
		return 0;
	}                        //over
	int p=0;
	for(int i=1;i<=n;i++){
		p+=c1[i];
	}
	char s[p+1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=c1[i];j++){
			s[cnt]=c2[i];
			cnt++;
		}
	}
	for(int i=1;i<=(p+1)/2;i++){
		if(s[i]!=s[p-i+1]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
