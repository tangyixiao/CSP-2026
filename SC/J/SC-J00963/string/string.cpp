#include<bits/stdc++.h>
using namespace std;
int n;
long long a[int(2e5+5)];
char p[int(2e5+5)];
long long h=0,h1=0,h2=0;
int z,yo;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%lld %c",&a[i],&p[i]);
		h1+=a[i];
	}
	z=1;
	yo=n;
	if(h1%2==0){
		int id1=1,id2=n;
		h1/=2;
		for(int i=1;i<=n;i++){
			h2+=a[i];
			if(h2==h1){
				id1=i;
				id2=i+1;
				break;
			}
			if(h2>h1){
				id1=i;
				id2=i;
				break;
			}
		}
		while(z<=id1&&yo>=id2){
			if(p[z]==p[yo]){
				if(a[z]>=a[yo]){
					a[z]-=a[yo];
					yo--;
				}
				else{
					a[yo]-=a[z];
					z++;
				}
				continue;
			}
			if(a[z]>=a[yo]){
				h+=a[yo];
				a[z]-=a[yo];
				yo--;
				
			}
			else{
				h+=a[z];
				a[yo]-=a[z];
				z++;
			}
		}
	}
	else{
		int id1=1,id2=n;
		h1=(h1+1)/2;
		for(int i=1;i<=n;i++){
			h2+=a[i];
			if(h2==h1){
				id1=i;
				id2=i;
				break;
			}
			if(h2>h1){
				id1=i;
				id2=i;
				break;
			}
		}
		while(z<=id1&&yo>=id2){
			if(p[z]==p[yo]){
				if(a[z]>=a[yo]){
					a[z]-=a[yo];
					yo--;
				}
				else{
					a[yo]-=a[z];
					z++;
				}
				continue;
			}
			if(a[z]>=a[yo]){
				h+=a[yo];
				a[z]-=a[yo];
				yo--;
				
			}
			else{
				h+=a[z];
				a[yo]-=a[z];
				z++;
			}
		}
	}
	cout<<h;
	fclose(stdin);
	fclose(stdout);
	return 0;
}