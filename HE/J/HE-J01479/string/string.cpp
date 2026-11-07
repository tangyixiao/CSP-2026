#include<bits/stdc++.h>
using namespace std;
long long num=0,n;
long long b[200001];
char a[200001];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	int j=0;
	string s;
	for(int i=0;i<n;i++){
		scanf("%lld %c",&b[i-j],&a[i-j]);
//		if(a[i]==a[i-1]&&i!=0){
//			j++;
//			b[i-1]+=b[i];
//		}
		
		for(int k=0;k<b[i];k++){
			s+=a[i];
		}
	}
	long long r=s.size()-1,l=0;
	while(l<r){
		if(s[l]!=s[r]){
			num++;
		}
		l++;
		r--;
	}
//	while(l<n-j||r>0){
//		if(a[l]==a[r]){
//			b[r]-=b[l];
//			if(b[r]>0){
//				if(b[r]-b[l+1]>0){
//					int d=l;
//					while(b[r]-b[l+1]>0&&d>0){
//						int k=b[r];
//						b[r]-=b[d];
//						if(b[r]<0){
//							num+=b[d]+b[r];
//						}else{
//							num+=b[d];
//						}
//						if(a[r]==a[d]){
//							b[d]=max(0,b[d]-k);
//						}
//						d++;
//					}
//				}else{
//					num+=b[r];
//				}
//			}else{
//				if(b[r-1]+b[r]<0){
//					int d=r;
//					while(b[d-1]+b[r]<0&&d>0){
//						int k=b[r];
//						b[r]+=b[d];
//						if(b[r]>0){
//							num+=b[d]-b[r];
//						}else{
//							num+=b[d];
//						}
//						if(a[r]==a[d]){
//							b[d]=max(0,b[d]+k);
//						}
//						d--;
//					}
//				}else{
//					num-=b[r];
//				}
//			}
//		}else{
//			num+=min(b[r],b[l]);
//		}
//	}
	printf("%lld",num);
	return 0;
} 
