#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int n,cnt=1;
int r[N],x,p[N],vis[N];
char e[N],y,k[N];
bool cheak(){
	char t=k[1];
	for(int i=1;i<=cnt;i++){
		if(t!=k[i]){
			return false;
		}
	}
	return true;
}
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x>>y;
		r[i]=x,e[i]=y;
	}
	for(int i=1;i<=n;i++){
		if(e[i]==e[i+1]){
			if(vis[i]==1)p[cnt]+=r[i+1];
			else p[cnt]+=(r[i]+r[i+1]);
			k[cnt]=e[i];
			vis[i]=1,vis[i+1]=1;
		}
		if(vis[i]==0) p[cnt]+=r[i],k[cnt]=e[i];
		if(i!=n&&e[i]!=e[i+1]) cnt++;
		
	}
	int ans=0;
	if(cheak()==true){
		cout<<ans;
		return 0;
	}
	for(int i=1,j=cnt;i<=cnt,j>=1;i++,j--){
		if(i>=j) break;
		if(k[i]==k[j]){
			ans+=(max(p[i],p[j])-min(p[i],p[j]));
			if(p[i]>p[j]){
				int l=p[i]-p[j];
				j--;
				while(l>0){
					if(i==j)ans-=l;
					if(l<=p[j]){
						p[j]-=l;
						break;
					}
					else l-=p[j],p[j]=0; 
					j--;
				}
			}
			else{
				int l=p[j]-p[i];
				i++;
				while(l>0){
					if(i==j)ans-=l;
					if(l<=p[i]){
						p[i]-=l;
						break;
					}
					else l-=p[i],p[i]=0; 
					i++;
				}
			}
		}
		else {
			ans+=max(p[i],p[j]);
			if(p[i]>p[j]){
				int l=p[i];
				while(l>0){
					if(i==j)ans-=l;
					if(l<=p[j]){
						p[j]-=l;
						break;
					}
					else l-=p[j],p[j]=0; 
					j--;
				}
			}
			else{
				int l=p[j];
				while(l>0){
					if(i==j)ans-=l;
					if(l<=p[i]){
						p[i]-=l;
						break;
					}
					else l-=p[i],p[i]=0; 
					i++;
				}
			}
		}
	}
	cout<<ans;
	return 0;
} 
