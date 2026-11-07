#include<bits/stdc++.h>
using namespace std;
int a[500005],pot[500005],b[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin>> a[i];
	}for(int p=1;p<=n;p++){
		int j=1;
		for(int i=p;i<=n;i++){
			int pos;
			bool flag=0;
			for(int q=1;q<=j;q++){
				if(b[q]==a[i]){
					pos=q;
					flag=1;
					break;
				}
			}
			if(flag==1){
				for(int q=pos;q<=j;q++){
					b[q]=0;
				}
			}
			b[j]=a[i];
			j++;
		}
		for(int i=1;i<=j-1;i++){
			pot[b[i]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout << pot[i] << " ";
	}
	return 0;
} 
