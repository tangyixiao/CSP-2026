#include<bits/stdc++.h>
using namespace std;
int n,m,a[200010],c[200010],l;
bool b[200010][32],flag;
int d[200010],ans;
bool go(int i){
	if(i==-1){
		return 0;
	}
	int cnt=0;
	for(int j=1;j<=l;j++){
		if(b[c[j]][i]==1){
			d[++cnt]=c[j];
		}
	}
	if(cnt==m){
		ans=a[d[1]];
		for(int j=2;j<=cnt;j++){
			ans&=a[d[j]];
		}
		cout<<ans;
		flag=1;
		return 0;
	}
	else if(cnt<m){
		if(go(i-1)==0)
			return 0;
	}
	else{
		int t=cnt;
	//	cout<<cnt<<endl;
		for(int j=2;j<=cnt;j++){
		//	cout<<"____"<<j<<endl;
			if(a[d[j]]==a[d[j-1]]){
				t--;
				//cout<<t<<endl;
				if(t==m){
					ans=a[d[1]];
					for(int j=2;j<=cnt;j++){
						ans&=a[d[j]];
					}
					cout<<ans<<endl;
					flag=1;
					return 0;
				}
			}
		}
		for(int j=1;j<=cnt;j++){
			c[j]=d[j];
		}
		l=cnt;
		if(go(i-1)==0){
			return 0;
		}
	}
}
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n,cmp);
	for(int i=1;i<=n;i++){
		int t=a[i],cnt=0;
		while(t){
			b[i][cnt++]=t%2;
			t/=2;
		}
	}
	for(int i=30;i>=0;i--){
		int cnt=0;
		for(int j=1;j<=n;j++){
			if(b[j][i]==1){
				c[++cnt]=j;
			}
		}
		if(cnt>m){
			l=cnt;
			go(i-1);
			if(flag==0){
				ans=a[c[1]];
				for(int j=2;j<=m;j++){
					ans&=a[c[j]];
				}
				cout<<ans;
			}
			break;
		}
		else if(cnt==m){
			ans=a[c[1]];
			for(int j=2;j<=m;j++){
				ans&=a[c[j]];
			}
			cout<<ans;
			break;
		}
	}
	return 0;
}