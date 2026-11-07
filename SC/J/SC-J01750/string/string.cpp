#include<bits/stdc++.h>
using namespace std;
int n;
long long a,q[200010],ans;
char c,p[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		q[i]=a;
		p[i]=c;
	}
	int l=1,r=n;
	while(l<=r){
		int r1=r,l1=l;
		if(p[l]!=p[r])ans+=min(q[l],q[r]);
		if(q[l1]<q[r1]){
			l++;
			q[r1]-=q[l1];q[l1]=0;
		}else if(q[l1]>q[r1]){
			r--;
			q[l1]-=q[r1];q[r1]=0;
		}else{
			l++;
			r--;
			q[l1]=0;q[r1]=0;
		}
	}
	cout<<ans;
	return 0;
}