#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[200005],s[200005];
bool num[200005][35];
int pows(int a,int b){
	if(b==0) return 1;
	else if(b==1) return a;
	int res=pows(a,b/2);
	if(b%2==0){
		return res*res;
	}else{
		return res*res*a;
	}
} 
void build(int x,int y){
	int l=0;
	for(int i=1;i<=40;i++){
		if(pows(2,i+1)>y){
			l=i;
			break;
		}
	}
	//mx_2=l;
	int nx=pows(2,l);
	while(y){
		if(y>=nx){
			y-=nx;
			num[x][l]=1;
		}else{
			num[x][l]=0;
		}
		nx/=2;
		l--;
	}
}
bool cmp(int x,int y){
	return x>y;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++){
		build(i,a[i]);
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<=30;j++){
			s[j]+=num[i][j];
			//cout<<num[i][j]<<" ";
		}
		//cout<<"\n";
	}
	//for(int i=30;i>=0;i--) cout<<s[i]<<" "; 
	for(int i=30;i>=0;i--){
		if(s[i]<m){
			continue;
		}
		if(m==s[i]){
			int ans=pows(2,31)-1;
			for(int j=1;j<=n;j++){
				if(num[j][i]){
					ans&=a[j];
				} 
			}
			cout<<ans;
			return 0;
		}else{
			vector<int> as;
			int si=0;
			for(int j=1;j<=n;j++){
				if(num[j][i]){
					as.push_back(j);
				}
			}
			si=s[i];
			while(si>m && i>=0){
				i--;
				int sum=0;
				for(auto u:as){
					if(!num[as[u]][i]){
						sum++;
					}
				}
				if(si-sum<m){
					continue;
				}
				for(auto u=0;u<as.size();u++){
					if(!num[as[u]][i]){
						as[u]=0;
					}
				}
				if(si==m){
					int ans=pows(2,31)-1;
					for(auto u:as){
						if(u){
							ans&=a[u];
						}
					}
					cout<<ans;
					return 0;
				}
				si-=sum;
			}
			int ans=pows(2,31)-1;
			for(auto u:as){
				if(u){
					ans&=a[u];
				}
			}
			cout<<ans;
			return 0;
		}
	}
	return 0;
}//Trick||Treat!	pian 10:07 50