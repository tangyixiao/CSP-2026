#include<bits/stdc++.h>
using namespace std;
int a[200009];
char b[200009];
long long x[200009];
int n;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr); 
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		x[i]=x[i-1]+a[i];
	}
	int i=1,j=n;
	long long tmp=0,ans=0;
	while(i<j){
		int inext=x[i]-tmp;
		int jprev=x[n]-tmp-x[j-1];
		if(inext<jprev){
			if(b[i]!=b[j])
				ans+=inext;
			tmp=tmp+inext;
			i++;
		}
		else if(inext==jprev){
			if(b[i]!=b[j])
				ans+=jprev;
			tmp=tmp+jprev;
			i++;
			j--;
		}
		else if(inext>jprev){
			if(b[i]!=b[j])
				ans+=jprev;
			tmp=tmp+jprev;
			j--;
		}
	}
	cout<<ans<<'\n';
	fclose(stdin);
	fclose(stdout);
	return 0;
}
