#include<bits/stdc++.h>
using namespace std;
int a[202020];char c[202020];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;cin>>n;
	long long s=0,s1=0,ans=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		s+=a[i];
	}
	int l=1,r=n;long long sl=a[1],sr=a[n];
	while(sl+sr<=s){
		//cout<<sl<<' '<<sr<<endl;
		if(c[l]!=c[r])ans+=min(a[l],a[r]);
		if(sl<sr){l++;sl+=a[l];a[r]-=a[l-1];}
		else if(sl>sr){
		r--;sr+=a[r];a[l]-=a[r+1];}
		else{
		l++,r--;sl+=a[l];sr+=a[r];}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
