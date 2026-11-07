#include<bits/stdc++.h>
using namespace std;

bool vis_a[200100];
bool vis_b[200100];

int n,m,p; 

long long ans;
long long len;
long long a[200100];
long long b[200100];

vector<long long>num[31];

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
		for(int j=0;j<=30;j++){
			if(a[i]&(1<<j))  num[j].push_back(i);  
		}
	}
	for(int i=30;i>=0;i--){
		if(num[i].size()>=m){
			len=num[i].size();
			p=0;
			for(int x:num[i]){
				b[++p]=x;
				vis_a[x]=1;
			}
			int j=i-1;
			while(len>m&&j>=0){
				len=0;
				for(int x:num[j]){
					if(vis_a[x]){
						len++;
						vis_b[x]=1;
						vis_a[x]=0;
					}
				}
				if(len<m)  break;
				int pp=0;
				for(int j=1;j<=p;j++){
					if(vis_b[b[j]]){
						b[++pp]=b[j];
						vis_b[b[j]]=0;
						vis_a[b[j]]=1;
					}
				}
				p=pp;
				j--;
			}
			if(len<=m||j<0){
				ans=a[b[1]];
				for(int j=2;j<=m;j++){
					ans=ans&a[b[j]];
				}
				printf("%lld",ans);
				return 0;
			}
		}
	}
	printf("0");
	fclose(stdin);
	fclose(stdout);
	return 0;
}
/*
4 2
3 15 12 12
5 3
31 3 1 15 7
*/
