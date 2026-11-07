#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,max1,a[200001],ans;
string b[200001],c[200001];
bool cmp(int a,int b){
	return a>b;
}
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++)cin>>a[i];
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++){
		int z=0;
		for(int j=0;(int)pow(2,j)<=a[i];j++)z++;
		max1=max(max1,z);
	}
	for(int i=0;i<n;i++){
		int z=0;
		for(int j=0;(int)pow(2,j)<=a[i];j++)z++;
		for(int j=max1-1;j>=0;j--){
			if(z<j)b[i]+='0';
			else {
				b[i]+=(a[i]/(int)pow(2,j))+'0';
				a[i]%=(int)pow(2,j);
			}
		}
	}
	/*for(int k=0;k<n;k++){
		cout<<b[k]<<'\n';
	}
	cout<<'\n';*/
	bool x=false;
	for(int i=0;i<max1;i++){
		int de=0,t=0;
		if(i>0&&x){
			for(int j=0;j<n;j++){
				b[j]=c[j];
			}
		}
		for(int j=0;j<n;j++){
			if(b[j][i]=='1')de++;
		}
		if(de<m){
			x=false;
			continue;
		}
		if(de==m){
			for(int j=m;j<=n;j++){
				b[j]=c[j];
			}
			break;
		}
		else{
			for(int j=0;j<de;j++){
				if(b[j][i]=='1'){
					c[t]=b[j];
					t++;
				}
			}
		}
		n=de;
		/*for(int k=0;k<n;k++){
			cout<<c[k]<<'\n';
		}
		cout<<'\n';*/
		if(de>=m)x=true;
		
	}
	for(int k=0;k<m;k++){
		int des=0;
		for(int i=b[k].length()-1;i>=0;i--){
			des+=(int)(b[k][i]-'0')*(int)(pow(2,b[k].length()-1-i));
		}
		//cout<<des<<'\n';
		if(k==0)ans=des;
		else ans=ans&des;
	}
	cout<<ans;
	return 0;
}
