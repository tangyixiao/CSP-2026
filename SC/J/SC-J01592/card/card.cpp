#include<bits/stdc++.h>
using namespace std;

int a[1000000],b[1000000],ans[1000000];
int check(int a){
	int i=0;
	while(1){
		if(b[i]==0){
			break;
		}
		if(b[i]==a){
			return i+1;
		}
		i++;
	}
	return 0;
}

int main(){
	freopen("card.in","r",cin);
	freopen("card.out","l",cout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		int d=0;
		for(int j=i;j<=n;j++){
//			for(int h=0;h<d;h++){
//				cout<<b[h]<<' ';
//			}
//			cout<<"\n";
			int c=a[j];
			int v=check(c);
			if(!v){
				b[d]=c;
				d++;
				continue;
			}
			d=v;
			while(1){
				if(b[v]==0){
					break;
				}else{
					b[v]=0;
				}
				v++;
			}
		}
		for(int j=0;j<=d;j++){
			ans[b[j]]++;
			b[j]=0;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}