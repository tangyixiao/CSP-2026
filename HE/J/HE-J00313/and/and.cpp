#include<bits/stdc++.h>
using namespace std;
int m,n;
int s[200010];
bool a[200010];
int ans=0;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>s[i];
	}
	sort(s+1,s+1+n);
	int l=-1,r=-1;
	for(int i=n;s[i]>ans;i--){
		for(int j=i-1;s[j]>ans;j--){
			int f=s[i]&s[j];
			if(f>=ans){
				l=i;
				r=j;
				ans=f;
			}
		}
	}
	a[l]=a[r]=1;
	for(int i=3;i<=m;i++){
		int h=0;
		for(int j=n;s[j]>h;j--){
			if(a[j]){
				continue;
			}
			int f=ans&s[j];
			if(f>=h){
				l=i;
				h=f;
			}
		}
		ans=h;
		a[l]=1;
	}
	cout<<ans;
}
//打了个暴力球球了测评姬大人多给点吧 
//wo yao shang qi pa xing wei da shang




//bie fan le zhen sha ye mei you
//别翻了 





























































//上午的题不太难，许愿下午遇到一个善良的出题人 
//还有 
//lzw同学今晚月色真美 
//ben lai hai xiang xie dian sha    jiu zhe yang ba 
