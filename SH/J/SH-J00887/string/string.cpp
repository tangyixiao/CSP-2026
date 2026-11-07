#include<bits/stdc++.h>
using namespace std;
int a[300000];
char b[300000];
long long t=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	int x=1,y=n;
	while (x<y){
		if (b[x]!=b[y]){
			if (a[x]>a[y]){
				t+=a[y];
				a[x]-=a[y];
				a[y]=0;
				y--;
			}else if (a[x]<a[y]){
				t+=a[x];
				a[y]-=a[x];
				a[x]=0;
				x++;
			}else{
				t+=a[x];
				a[x]=0;
				a[y]=0;
				x++;
				y--;
			}
		}else{
			if (a[x]>a[y]){
				a[x]-=a[y];
				a[y]=0;
				y--;
			}else if (a[x]<a[y]){
				a[y]-=a[x];
				a[x]=0;
				x++;
			}else{
				a[x]=0;
				a[y]=0;
				x++;
				y--;
			}
		}
	}
	cout<<t<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
