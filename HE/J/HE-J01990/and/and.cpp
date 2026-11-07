#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,t,mm,anss;
int d[200005][35];
int a[200050],s[200050],ans[200050],skk;
bool f[200005];
bool cmp(int x,int y){
	return x>y;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}sort(a+1,a+n+1,cmp);
	if(m==1){
		cout<<a[1];
		return 0;
	}else if(m==n){
		skk=a[1];
		for(int i=2;i<=n;i++){
			skk=skk&a[i];
		}cout<<skk;
		return 0;
	}
	else if(m==2&&n<=2000){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				skk=max(skk,(a[i]&a[j]));
			}
		}cout<<skk;
		return 0;
	}else{	
		for(int i=1;i<=n;i++){
			int l=1,tt=0;t=a[i];
			while(t>0){
				d[i][l++]=t%2;tt++;
				t/=2;mm=max(mm,tt);
			}
		}
		for(int i=1;i<=n;i++){
			for(int j=mm;j>=1;j--){
				if(d[i][j]==1)s[j]++;
//				cout<<d[i][j]<<" ";
			}
//			cout<<endl<<endl;
		}
		for(int j=mm;j>=1;j--){
			for(int i=2;i<=n;i++){
				if(s[j]<m){
					break;
				}else{
					if(d[i][j]>d[i-1][j]&&f[i]!=1){
						swap(d[i],d[i-1]);f[i-1]=1;
					}			
				}
			}
		}memset(s,0,sizeof(s));
		for(int i=1;i<=m;i++){
			for(int j=mm;j>=1;j--){
				if(d[i][j]==1)s[j]++;
			}
		}
		for(int j=mm;j>=1;j--){
			if(s[j]<m){
				ans[j]=0;
			}else{
				ans[j]=1;
			}
		}for(int i=mm;i>=1;i--){
//			cout<<ans[i]<<" ";
			anss=anss*2+ans[i];
		}
//		cout<<endl;
		cout<<anss;
		return 0;			
	}
}
