#include<bits/stdc++.h>
using namespace std;
bool ok=true;
int n,a[20020],q=0;
char c1[10010],c[10010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long ans;
	cin>>n;
	for(int i=1;i<=n;i++){
		q=max(a[i],a[i]-1);
		cin>>a[i]>>c;
	}
	c1[0]=c[0];
	for(int i=n;i>=1;i--){
		if(c1[0]!=c[i]){
			ok=false;
			break;
		}
	}
	if(ok){
		cout<<"0";
	}else{
		cout<<q;
	}
	fclose(stdin);
	fclose(stdout);
    return 0;	
}
