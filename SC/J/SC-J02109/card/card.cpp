#include<bits/stdc++.h>
using namespace std;
long long int n,m,table[100005],nem[100005]={0},a[100005],b[100005]; 
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	int k=1,tail=1,head=n;
	while(k<=n){	    		
 		for(int i=1;i<=head;i++){
		    table[tail]=a[i];
		    tail++;	
			for(int j=1;j<=tail-1;j++){
				if(table[j]==table[tail-1])
				{					   	
				    int c=1;			
					for(int h=j+1;h<=tail-1;h++){
						a[c]=table[h];
						c++;
					}
					head+=c;
					tail=j+1;
				}
			}						
		}
		for(int i=1;i<=tail-1;i++){
			int kk=table[i];
			nem[kk]++;
		}
		k++;		
	}
	for(int i=1;i<=m;i++)
	printf("%d ",nem[i]);
    return 0;
}