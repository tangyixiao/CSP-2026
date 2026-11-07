#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool a[40];
int x[200010];
int xx[200010][40];
int ccnt[31];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>x[i];
	}
	sort(x+1,x+n+1);
	int xxx=40;
	int jj=-1;
	for(int i=n;i>=1;i--){
		int aaa=x[i];
		int j=0;
		while(aaa){
			xx[i][j++]=aaa%2;
			aaa/=2;
		}
		j--;
		if(jj==-1){
			jj=j;
		}
		if(j!=xxx){
			ccnt[j]=i;
			xxx=j;
		}
	}
	int ans=0;
	int maxx=0;
	for(int k=jj;k>=0;k--){
		maxx=0;
		if(1<<(k+1)-1<=ans){
			break;
		}
		for(int i=k;i>=0;i--){
			int cnt=0;
			for(int j=ccnt[k];j>=max(ccnt[k]-m+1,0);j--){
				cnt+=xx[j][i];
			}
			if(cnt==m){
				maxx+=1<<(i);
			}
		}
		ans=max(maxx,ans);
	}
	cout<<ans;
	return 0;
}
