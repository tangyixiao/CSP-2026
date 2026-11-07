#include <bits/stdc++.h>
using namespace std;
struct duan{
	long long liang;
	char zifu;
};
duan s[200001];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long allsum=0,nowsum=0,ans=0,fannow=n,yi=0;
	for(int i=1;i<=n;i++){
		cin>>s[i].liang>>s[i].zifu;
		allsum+=s[i].liang;
	}
	for(int i=1;i<=n;i++){
		if(nowsum>=(allsum+1)/2){
			break;
		}else if(nowsum+s[i].liang>(allsum+1)/2){
			long long need=(allsum+1)/2-nowsum;
			while(need>0){
				if(s[fannow].liang-yi<=need){
					if(s[fannow].zifu!=s[i].zifu){
						ans+=s[fannow].liang-yi;
					}
					need-=s[fannow].liang-yi;
					nowsum+=s[fannow].liang-yi;
					fannow--;
					yi=0;
				}else{
					if(s[fannow].zifu!=s[i].zifu){
						ans+=need;
					}
					nowsum+=need;
					yi+=need;
					need=0;
				}
			}
		}else{
			long long need=s[i].liang;
			while(need>0){
				if(s[fannow].liang-yi<=need){
					if(s[fannow].zifu!=s[i].zifu){
						ans+=s[fannow].liang-yi;
					}
					need-=s[fannow].liang-yi;
					nowsum+=s[fannow].liang-yi;
					fannow--;
					yi=0;
				}else{
					if(s[fannow].zifu!=s[i].zifu){
						ans+=need;
					}
					nowsum+=need;
					yi+=need;
					need=0;
				}
			}
		}
	}
	cout<<ans;
	return 0;
}
