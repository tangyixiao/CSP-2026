#include<bits/stdc++.h>
using namespace std;
int n;
long long ans,sum;
struct stu{
	int a;
	char c;
}x[200010];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x[i].a>>x[i].c;
		sum+=x[i].a;
	}
	int l=x[1].a,r=x[n].a;
	for(int i=1,j=n;i<j;){
		if(x[i].c!=x[j].c){
			ans+=min(l,r);
			//cout<<i<<" "<<j<<endl;
		}
		int m=min(l,r);
		l-=m;
		r-=m;
		if(l==0){
			i++;
			l=x[i].a;
		}
		if(r==0){
			j--;
			r=x[j].a;
		}
	}
	cout<<ans;
	return 0;
}
