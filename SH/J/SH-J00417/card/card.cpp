#include<bits/stdc++.h>
using namespace std;
const int c=5e5+5;
const int h=3e5+5;
int n,m;
int a[c],b[h];
int s[c],d[h],size;
int y[h],cnt;
bool dif=1;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<n;i++){
		if(a[i]<=a[i+1]){
			continue;
		}
		else{
			dif=0;
			break;
		}
	} 
	if(dif==1){
		for(int i=n;i>=1;i--){
			y[a[i]]=max(y[a[i]],i);
		}
		for(int i=1;i<=m;i++){
			if(i!=m){
				cout<<y[i]<<" ";
			}
			else cout<<y[i]<<endl;
		}
		return 0;
	} 
	for(int i=1;i<=n;i++){
		size=0;
		memset(s,0,sizeof(s));
		memset(b,0,sizeof(b));
		for(int j=i;j<=n;j++){
			if(j==i){
				size++;
				s[size]=a[j];
			}
			else{
				bool f=0;
				for(int k=1;k<=size;k++){
					if(s[k]==a[j]){
						size=k;
						f=1;
						break;
					}
				}
				if(f==0){
					size++;
					s[size]=a[j];
				}
			}
		}
		for(int j=1;j<=m;j++){
			for(int k=1;k<=size;k++){
				if(s[k]==j){
					b[j]=1;
				}
			}
		}
		for(int j=1;j<=m;j++){
			if(b[j]==1)d[j]++;
		} 
	}
	for(int i=1;i<=m;i++){
		if(i!=m)cout<<d[i]<<" ";
		else cout<<d[i]<<endl;
	}
	return 0;
}
