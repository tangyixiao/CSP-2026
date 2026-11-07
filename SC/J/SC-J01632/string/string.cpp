#include<bits/stdc++.h>
using namespace std;
long long l[200001][4];
char c[200001];
int main(){
	freopen("string.out","w",stdout);
	freopen("string.in","r",stdin);
	int n; cin>>n;
	long long b=0;
	for(int i=1;i<=n;i++){
		long long a; cin>>a>>c[i];
		l[i][1]=b+1; l[i][2]=b+a; l[i][3]=a;
		b+=a;}
	long long ans=0;
	long long le=0,ri=0;
	for(int i=1,j=n;i<j; ){
		le=l[i][2]; ri+=l[j][3];
		if(c[i]!=c[j]){
			ans+=min(l[i][3],l[j][3]);
			l[i][3]-=min(l[i][3],l[j][3]);
			l[j][3]-=min(l[i][3],l[j][3]); 
		}
		if(le>ri) j--;
		if(le<ri) i++;
		if(le==ri){j--;i++;}
	}
	cout<<ans;
    return 0;}
