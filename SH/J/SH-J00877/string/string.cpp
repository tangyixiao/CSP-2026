#include<bits/stdc++.h>
using namespace std;
struct A{
	int a;
	char c;
};
A s[200005];
A p[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long cnt=0,cnt2=0,ans=0;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> s[i].a >> s[i].c;
		cnt+=s[i].a;
	}if(cnt%2==1){
		cnt/=2;
		cnt++;
	}else cnt/=2;
	int i=0,j=0,mid;
	bool flag=1;
	while(i<n){
		if(cnt2+s[i].a<=cnt&&flag){
			p[j].a=s[i].a;
			p[j].c=s[i].c;
			j++;i++;
			cnt2+=s[i].a;
		}else if(cnt2+s[i].a>cnt&&flag){
			p[j].a=cnt-cnt2;
			p[j].c=s[i].c;
			s[i].a=cnt2+s[i].a-cnt;
			j++;cnt2=cnt;
			flag=0;
			mid=j-1;
		}
		else if(flag==0){
			p[j].a=s[i].a;
			p[j].c=s[i].c;
			j++;i++;
			cnt2+=s[i].a;
			
		}
	}
	int r=0,l=j-1;
	while(r<mid||l>mid){
		if(p[r].c==p[l].c){
			if(p[r].a>p[l].a){
				p[r].a-=p[l].a;
				l--;
			}else if(p[r].a<p[l].a){
				p[l].a-=p[r].a;
				r++;
			}else{
				r++;l--;
			}
		}else{
			if(p[r].a>p[l].a){
				p[r].a-=p[l].a;
				ans+=p[l].a;
				l--;
			}else if(p[r].a<p[l].a){
				p[l].a-=p[r].a;
				ans+=p[r].a;
				r++;
			}else{
				ans+=p[r].a;
				r++;l--;
			}
		}
	}
	cout << ans;
	return 0;
}
