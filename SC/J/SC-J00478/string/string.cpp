#include<bits/stdc++.h>
using namespace std;

int n;
long long a[200010],len=0,sum=0,r,p,ans=0;
char ch[200010];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>ch[i];
		len=len+a[i];
	}
	r=n;
	for(int i=1;i<=n;i++){
		if((sum+a[i])*2>len){
			p=(len/2)-sum;
			sum=len/2;	
			if(p==0){
				break;
			}
		}else{
			sum=sum+a[i];
			p=a[i];
		}
		
		for(r;r>=i&&p>0;r--){
			if(p>=a[r]){
				p-=a[r];
				if(ch[r]!=ch[i]){
					ans+=a[r];
					
				}
				a[r]=0;
			}else{
				if(ch[r]!=ch[i]){
					ans+=p;
					
				}
				a[r]=a[r]-p;
				p=0;
				
				break;
			}
		}
	}
	cout<<ans;
	return 0;
}