#include<bits/stdc++.h>
using namespace std;
long long n,k=1;
char Rs[200010],Cx;
long long Aa,ans,Big;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	//ios::sync_with_stdio(false);
	//cin.tie(nullptr);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>Aa>>Cx;
		Big+=Aa;
		for(k;k<=Big;k++){
			Rs[k]=Cx;
		}
		
	}
	for(long long i=1,j=Big;i<=Big/2;i++,j--){
		if(Rs[i]!=Rs[j])ans++;
	}
	cout<<ans;
	//for(int i=1;i<=Big;i++)cout<<Rs[i];
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
