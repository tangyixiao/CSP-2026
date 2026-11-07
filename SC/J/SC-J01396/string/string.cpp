#include<bits/stdc++.h>
#define int long long
using namespace std;
struct node{
	int num;
	char c;
}a[200010];
struct nodd{
	int num,yu,fs;
	char c,yuc;
}cnt[200010];
int n;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    cin>>n;
    int mid=0,p=0,h=1;
    for(int i=1;i<=n;i++){
    	cin>>a[i].num>>a[i].c;
    	mid+=a[i].num;
    	
	}
	mid/=2;
	bool f=false;
	for(int i=1;i<=n;i++){
		if(!f&&p+a[i].num>=mid){
    		cnt[h].num=mid-p;
    		cnt[h].c=a[i].c;
    		h++;
    		cnt[h].num=a[i].num-mid+p;
    		cnt[h].c=a[i].c;
    		f=true;
    		h++;
		}
		else{
			cnt[h].num=a[i].num;
			cnt[h].c=a[i].c;
			p+=a[i].num;
			h++;
		}
	}
	int ans=0;
	string s="",ss="";
	if(h%2==0){
		for(int i=1;i<h/2;i++){
    		for(int j=1;j<=cnt[i].num;j++){
    			s+=cnt[i].c;
    		}
    	}
    	for(int i=h-1;i>=h/2;i--){
		    for(int j=1;j<=cnt[i].num;j++){
			    ss+=cnt[i].c;
		    }
	    }
	}
	else{
		for(int i=1;i<h/2;i++){
    		for(int j=1;j<=cnt[i].num;j++){
    			s+=cnt[i].c;
    		}
    	}
    	for(int i=h-1;i>=h/2+1;i--){
		    for(int j=1;j<=cnt[i].num;j++){
			    ss+=cnt[i].c;
		    }
	    }
	}
	for(int i=0;i<s.size();i++){
		if(s[i]!=ss[i]){
			ans++;
		}
	}
	//cout<<s<<" "<<ss<<endl;
	/*
	for(int i=1;i<=h/2;i++){
		if(cnt[i].fs==1){
			if(cnt[i].c!=cnt[i].yuc){
				cnt[i+1].yuc=cnt[i].yuc;
			}
			else{
				if(cnt[i].num>=cnt[i].yu;){
					cnt[i].num-=cnt[i].yu;
					cnt[i].yu=0;
				}
				else{
				    cnt[i].yu-=cnt[i].num;
					cnt[i].num=0;
				}
			}
	    }
	}
	*/
	cout<<ans;
	return 0;
}
/*
4
3 a
4 b
3 c
2 a

6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/