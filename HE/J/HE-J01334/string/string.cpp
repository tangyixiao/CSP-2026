#include<bits/stdc++.h>
using namespace std;
struct k{
	int sl;
	char zf;
}a[100010];
int n,x; 
long long s,sam;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i].sl>>a[i].zf;
		sam+=a[i].sl;
	}int sy=0,i=0,sx=1,x=1;
	while(x){
		if(x+a[i].sl>sam/2&&x+a[n-1-i].sl>sam/2){
			if(a[i].sl>a[n-1-i].sl){
				a[i].sl=a[n-1-i].sl;
			}a[n-1-i].sl=a[i].sl;
			x=0;
		}
		if(a[i].sl!=a[n-i-1].sl){
			x+=max(a[i].sl,a[n-i-1].sl);
			sx=1;
			sy=max(a[i].sl-a[n-i-1].sl,a[n-i-1].sl-a[i].sl);
			if(a[i].zf!=a[n-i-1].zf){
				s+=min(a[i].sl,a[n-i-1].sl);
			}
			if(a[i].sl<a[n-i-1].sl)sx=-1;
			if(sx==1){
				if(a[i].zf!=a[n-i-2].zf){
					s+=sy;
				}
				a[n-i-2].sl-=sy;
			}else{
				if(a[i+1].zf!=a[n-i-1].zf){
					s+=sy;
				}
				a[i+1].sl-=sy;
			}
		}else if(a[i].sl==a[n-i-1].sl){
			if(a[i].zf!=a[n-i-1].zf)s+=a[i].sl;
		}
		i++;
	}cout<<s;
	return 0;
} 
