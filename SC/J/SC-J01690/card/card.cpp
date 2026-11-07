#include <bits/stdc++.h>
using namespace std;
int n,m;
const int N=5*1e5;
int a[N];
int b[N];
int c[N];

void search(int x){
	int cnt=0;
	for(int i=x;i<n;i++){
		int flag=0;
		int c=a[i];
		//cout<<c<<"  ";
		if(cnt==0){
			b[i]=c;
			cnt++;
		//	cout<<b[i]<<" "<<endl;
		}else{
			for(int j=0;j<n;j++){
				if(b[j]==c){
					flag=1;
				}
				if(flag==0){
					continue;
				}else{
					b[j]=0;
				}
			}
			b[i]=c;
			/*for(int j=0;j<n;j++){
				cout<<b[j]<<" ";
			}
			cout<<endl;*/
		}
	}
	for(int i=0;i<n;i++){
		c[b[i]]++;
		b[i]=0;
	}
	//cout<<endl;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		
	}
	for(int i=0;i<n;i++){
		search(i);
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<" ";
	}
	return 0;
}