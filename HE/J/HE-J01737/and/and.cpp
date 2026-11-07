#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,m,mai;
int shi[30],ca[30],cb[30];
bool a[N][50],b[N],c[50];
string s;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>s;
		int len=s.size();
		for(int j=1;j<=len;j++){
			shi[j]=s[j-1]-'0';
		}
		bool f=1;
		int id=0;
		while(f){
			f=0;
			id++; 
			for(int j=1;j<=len;j++){
				if(shi[j])f=1;
				shi[j+1]+=shi[j]%2*10;
				shi[j]/=2;
			}
			if(shi[len+1]){
				a[i][id]=1;
				shi[len+1]=0;
			}
		}
		mai=max(mai,id);
	}
	mai-=1;
//	for(int i=1;i<=n;i++){
//		for(int j=mai;j>0;j--)cout<<a[i][j];
//		cout<<endl;
//	}
	for(int i=1;i<=n;i++)b[i]=1;
	for(int i=mai;i>0;i--){
		int sum=0;
		for(int j=1;j<=n;j++){
			if(a[j][i]&&b[j])sum++;
		}
		if(sum<m)continue;
		c[i]=1;
		for(int j=1;j<=n;j++){
			if(!a[j][i]&&b[j])b[j]=0;
		}
	}
//	for(int i=30;i>0;i--)cout<<c[i];
//	cout<<endl;
	cb[1]=1;
	for(int i=1;i<=mai;i++){
		if(c[i]){
			for(int j=1;j<=30;j++){
				ca[j]+=cb[j];
				if(ca[j]>=10){
					ca[j]-=10;
					ca[j+1]++;
				}
			} 
		}
		bool jin=0;
		for(int j=1;j<=30;j++){
			cb[j]*=2;
			cb[j]+=jin;
			jin=0; 
			if(cb[j]>=10){
				cb[j]-=10;
				jin=1;
			}
//			cout<<cb[j];
		}
//		cout<<endl;
	}
	int l=30;
	while(ca[l]==0&&l>1)l--;
	 for(int i=l;i>0;i--)cout<<ca[i];
	return 0;
} 
