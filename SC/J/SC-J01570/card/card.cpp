#include<bits/stdc++.h>
using namespace std;
int main(){
//	freopen("card.im","r",stdin);
//	freopen("card.out","w",stdout);
	int n,m,a[500005],d[n],k;
	string b,c;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		b+=char(a[i]+'0');
	}
	for(int i=0;i<n;i++){
		k=i;
		for(int q=i+1;q<n;q++){
			if(c[k]=='0') break;
			if(c[k]==c[q]) {
				for(int w=i;w<=q;w++){
					c[w]='0';
					k=q;
				}
			}
		}
		for(int e=0;e<n;e++){
			if(c[e]!='0') d[a[e]-1]++;
		}
		b[i]='0';
		c=b;
	}
	for(int i=0;i<m;i++){
		cout<<d[i]<<' ';
	}
	return 0;
}