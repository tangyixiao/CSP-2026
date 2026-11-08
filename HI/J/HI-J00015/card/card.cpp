#include<bits/stdc++.h>
using namespace std;
int a[100005],c[100005];
int b[10005][10005];
int main(){
	//freopen("card.in","r",stdin);
	//freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int x=1;x<=n;x++){
		string l="";
		for(int i=x;i<=n;i++){
			for(int j=x;j<i;j++){
				if(a[i]==a[j]){
					l="";
					break;
				}
			}
			l+=(a[i]+'0');
		}
		c[x]=l.size();//³¤¶È 
		for(int i=0;i<l.size();i++){
			b[x-1][i]=l[i]-'0';
		}
	}
	int cnt=0;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			for(int x=0;x<c[j];x++){
				if(b[j-1][x]==i)cnt++;
			}
		}
		cout<<cnt<<' ';
		cnt=0;
	}
	return 0 ;
}  

