#include<bits/stdc++.h>
using namespace std;
int n;
int a[200010];
char b[200010];
long long len=0;
int aa[200010];
char bb[200010];
int aaa[200010];
char bbb[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		len+=a[i];
	}
	long long mid=len/2+bool(len%2);
	long long cnt=0;
	int p=0;
	for(int i=1;i<=n;i++){
		if(cnt+a[i]<=mid){
			aa[++p]=a[i];
			bb[p]=b[i];
			cnt+=a[i];
		}else{
			if(len%2==1){
				if(mid-cnt==1){
					p++; 
					break;
				} 
			}
			if(cnt<mid){
				aa[++p]=mid-cnt;
				bb[p]=b[i];
				break;
			}else{
				break;
			}
		}
	}
	int q=0;
	int u;
	if(cnt!=mid){
		aaa[++q]=cnt+a[p]-mid;
		bbb[q]=b[p];
		u=p+1;
	}else{
		u=p+1;
	}
	for(int i=u;i<=n;i++){
		aaa[++q]=a[i];
		bbb[q]=b[i];	
	}
	cnt=0;
	long long st,ed;
	long long ans=0;
	int y=1;
	if(len%2==1){
		p--;
	}
	long long stt=1,edd=aaa[y];
	for(int i=p;i>=1;i--){
		st=cnt+1,ed=cnt+aa[i];
		cnt+=aa[i];
		if(edd>=ed){
			if(bb[i]==bbb[y]){
				ans+=min(edd,ed)-max(stt,st)+1;
			}
			if(edd==ed){
				y++;
				stt=edd+1;
				edd=stt+aaa[y]-1;
			}
		}else{
			while(1){
				if(bb[i]==bbb[y]){
					ans+=min(edd,ed)-max(stt,st)+1;
				}
				if(edd>=ed){
					break;
				}
				y++;
				stt=edd+1;
				edd=stt+aaa[y]-1; 
			}
		}
	}
	if(len%2==0){
		cout<<mid-ans;
	}else{
		cout<<mid-1-ans;
	}
	return 0;
}
