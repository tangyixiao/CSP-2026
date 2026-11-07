#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5 +10;
long long n,m,a[maxn]={-1},num,cnt,b[maxn]={-1},ww=0,flag;
string s,ss[maxn],sss;
int main(){
//	freopen("and.in","r",stdin);
//	freopen("and.out","w",stdout); 
	cin>>n>>m;
	for(long long i=0;i<n;i++){
		cin>>num;
		int w2=0,w=0;
		while(num){
			w2=num % 2;
			for(long long j=0;j<w;j++){
				w2 = w2 *10;
			}
			a[i] += w2;
			num=num/2;
			w++;
		}
	}
	long long cnt2 = 0;
	for(long long i =0;i< n ; i++){
		int c[maxn] = {-1};
		
		for(long long k=i;k<n;k++){
			c[i] = a[i];
			for(long long j=k+1;j<m-1+k;j++){
				
				if(a[j] == -1){
					break;
				}else{
					c[j] = a[j];
					while(1){
						
						if(c[j] /10 == c[j-1] / 10 ){
							c[j] /= 10;
							c[j-1] /= 10;
							ww=c[j]/10;
							for(long long qq=0;qq<flag;qq++){
								ww += ww *10;
							}
						}
						flag++;
					}
					c[j] = a[j];
					c[j-1] = a[j-1];
					b[flag] = ww;
				}	
			}
		}
	}
	long long cnt3 =0;
	for(int i =0;i<=n;i++){
		cnt3 = max(cnt3,b[i]);
	}
	int flag2 = 0,num4=0,num5=0;
	while(cnt3){
		flag2 = cnt3 %10;
		cnt3 = cnt3/10; 
		for(long long qq=0;qq<num4;qq++){
			num5 += flag2 *10;
		}
		num4++;
		}
	cout<<num5;
	return 0;
}
