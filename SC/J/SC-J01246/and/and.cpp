#include<bits/stdc++.h>
using namespace std;
long long m,n,n1[200010],n2[200010][35],l[200010],p[210],l2,xx,ans[210],ans1;
struct stu {
	int a;
	int x;
};
stu k[200010];
bool f(stu l1,stu r1) {
	int a,b;
	for(int i=xx; i>=1; i--) {
		a+=n2[l1.x][i]*pow(2,i-1);
		b+=n2[r1.x][i]*pow(2,i-1);
	}
	return a<b;
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>n1[i];
		int s=n1[i];
		while(s!=0) {
			n2[i][++l[i]]=s%2;
			p[l[i]]++;
			s/=2;
		}

	}
	for(int i=32; i>=0; i--) {
		if(p[i]>=m) {
			for(int j=1; j<=n; j++) {
				if(n2[j][i]==1) {
					k[++l2].a=n1[j];
					k[l2].x=j;
				}
			}
			xx=i;
			break;
		}
	}
	sort(k+1,k+l2+1,f);
	for(int i=0; i<=209; i++) {
		ans[i]=1;
	}
	for(int i=xx; i>=1; i--) {
		for(int j=1; j<=m; j++) {
			if(ans[i]==0||n2[k[j].x][i]==0) {
				ans[i]=0;
			}
		}
	}
	for(int i=1; i<=xx; i++) {
		ans1+=ans[i]*pow(2,i-1);
	}
	cout<<ans1;
	return 0;
}