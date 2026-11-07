#include<bits/stdc++.h>
using namespace std;
struct as{
	int a;
	char s;
}a[200005];
int n;
long long cnt=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].a>>a[i].s;
	}
	long long cnt=0;
	int ac=0,bc=0;
	for(int i=1,j=n;i<=n/2&&j>=n/2;){
		if(a[i].s==a[j].s){
			if(a[i].a>a[j].a){
				ac=a[i].a-a[j].a;
				bc=1;
				j--;
			}
			else if(a[i].a==a[j].a){
				bc=1;
				i++;
				j--;
			}
			else{
				ac=a[j].a-a[i].a;
				bc=2;
				i++;
			}
		}
		else{
			if(ac==0){
				cnt+=min(a[i].a,a[j].a);
			}
			else{
				cnt+=ac;
			}
			if(ac==0){
				if(a[i].a>a[j].a){
					ac=a[i].a-a[j].a;
					bc=1;j--;
				}
				else if(a[i].a==a[j].a){
					ac=0;
					i++;
					j--;
				}
				else{
					ac=a[j].a-a[i].a;
					bc=2;i++;
				}
			}
			else{
				if(a[i].s==a[j].s){
					if(bc==1){
					if(ac>a[j].a){
						j--;bc=1;
						ac=ac-a[j].a;
					}
					else if(ac==a[j].a){
						ac=0;bc=0;
						i++;
						j--;
					}
					else{
						ac=a[j].a;
						i++;
						bc=2;
					}
					}
					else if(bc==2){
						if(ac>a[i].a){
						j--;bc=1;
						ac=ac-a[i].a;
					}
					else if(ac==a[i].a){
						ac=0;bc=0;
						i++;
						j--;
					}
					else{
						ac=a[i].a;
						i++;
						bc=2;
					}
					}
				}
				else{
					if(a[i].a>a[j].a){
						ac=a[i].a-a[j].a;
						bc=1;j--;
					}
					else if(a[i].a==a[j].a){
						ac=0;
						i++;
						j--;
					}
					else{
						ac=a[j].a-a[i].a;
						bc=2;i++;
					}
				}
			}
		}
	}
	cout<<cnt;
	return 0;
}
