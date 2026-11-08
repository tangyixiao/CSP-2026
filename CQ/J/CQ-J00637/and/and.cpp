#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[200005];
int n,m;
int aa[35];//前i轮已经确定的二进制 
int shuer[200005][35];//第i个数字转为二进制 
int er[35][35];//第i轮第j位1的个数 
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int lun=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		int cun=a[i];
		int shu=0;
		while(cun!=0){
			shu++;
			er[lun][shu]+=cun%2;
			shuer[i][shu]+=cun%2;
			cun=cun/2;
		}
	}
	int s=31;
	int ans=0;
	while(s>=1){
		int ji=-1;
		for(int i=s;i>=1;i--){
			if(er[lun][i]>=m){
				ans=ans+pow(2,i-1);
				ji=i;
				lun++;
				s=i-1;
				break;
			}
		}
		if(ji==-1)break;
		else{
			aa[ji]=1;
			for(int i=1;i<=n;i++){
				bool pan=1;
				for(int j=1;j<=31;j++){
					if(aa[j]==1&&shuer[i][j]==0){
						pan=0;
						break;
					}
				}
				if(pan){
					for(int j=1;j<=31;j++){
						er[lun][j]+=shuer[i][j];
					}
				}
			}
		}
	}
	cout<<ans;
	return 0;
}
