#include<bits/stdc++.h>
using namespace std;
int n,a,t=0;
int s=0;
bool flag=1;
char c[2005],c1[2005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		cin>>a>>c[i];
		s+=a;
	}
	sort(c+1,c+s+1);
	for(int i=s;i>0;i--){
		c1[t++]=c[i];
	}
	for(int i=0;i<s;i++){
		if(c1[i]!=c[i]){
			flag=0;
			break;
		} 
	}
	if(flag==0) cout<<2;
	else cout<<0;
	fclose(stdin);fclose(stdout);
	return 0;
}