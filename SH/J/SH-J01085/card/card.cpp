#include<bits/stdc++.h>
using namespace std;
int n,m;
const int SIZE=5e5+10;
int a[SIZE]; 
int ton[SIZE];
int main(){
	freopen("card.in" , "r" , stdin);
	freopen("card.out" , "w" , stdout);
	scanf("%d",&n);
	scanf("%d",&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		ton[a[i]]++;
	}
	for(int i=1;i<=SIZE-2;i++){
		if(!ton[i]==0){
			if(ton[i]%2==1){
				printf("%d ",i);
			}
		}
	}
	return 0;
}
