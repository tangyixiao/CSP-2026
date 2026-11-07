#include<iostream>
using namespace std;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	scanf("%d %d",&n,&m);
	int d[n];
	char a;
	for(int i=0;i<n;i++){
		scanf("%d",&d[i]);
		scanf("%c",&a);
	}
	int p=0;
	for(int i=0;i<n;i++){
		for(int j=1;j<n;j++){
			if(d[j]>d[j-1]){
				p=d[j];
				d[j]=d[j-1];
				d[j-1]=p;
			}
		}
	}
	int q=d[0];
	for(int i=1;i<m;i++){
		q&=d[i];
	}
	printf("%d",q);
	return 0;
}