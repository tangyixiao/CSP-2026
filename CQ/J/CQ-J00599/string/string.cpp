#include<bits/stdc++.h>
using namespace std;
struct st{
	int len;
	char let;
}s1[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,leng=0;
	cin>>n;
	vector<char> s1;
	for(int i=1;i<=n;i++){
		int len;
		char ch;
		cin>>len>>ch;
		for(int j=1;j<=len;j++){
			s1.push_back(ch);
		}
		leng+=len;
	}
	long long ans=0;
	if(leng%2==1){
		long long mid=leng/2+1;
		long long lx=mid,rx=mid;
		while(lx!=0&&rx!=leng+1){
			lx--;rx++;
			if(s1[lx]!=s1[rx]){
				ans++;
			}
		}
	}else{
		long long mid1=leng/2,mid2=leng/2+1;
		long long lx=mid1,rx=mid2;
		while(lx!=0&&rx!=leng+1){
			if(s1[lx]!=s1[rx]){
				ans++;
			}
			lx--;rx++;
		}
	}
	cout<<ans;
	//先统计长度，算出mid，再找到mid所在区间编号，随后左右交替拓展区间，定义一个左指针和右指针，左指针为左边区间最远的左端点，右指针为右端点
	//每次拓展时都检查拓展区间编号代表的字母与下一个拓展的区间编号+1代表的字母是否相等，不相等则答案加上abs((mid-l)-(r-mid))
	//进入下一轮循环时若l==1&&r==n，则退出循环并输出ans，字符数据用struct存
	/*for(int i=1;i<=n;i++){
		cin>>s1[i].len>>s1[i].let;
		leng+=s1[i].len;
	}
	long long ans=0;
	if(leng%2==1){
		long long mid=leng/2+1;
		long long sum=0,lx=0,rx=0,lq=0,rq=0,pd=0;
		for(int i=1;i<=n;i++){
			sum+=s1[i].len;
			if(sum>=mid){
				lq=i;rq=i;lx=sum-s1[i].len;rx=sum;
				if(rx+1-mid>mid-lx){
					pd=0;
					if(s1[rq].let!=s1[lq-1].let){
						ans+=abs(2*mid-lx-rx-1);
					}
				}else if(rx+1-mid<mid-lx){
					pd=1;
					if(s1[lq].let!=s1[rq+1].let){
						ans+=abs(2*mid-lx-rx-1);
					}
				}else{
					if(s1[lq-1].len>s1[rq+1].len){
						pd=1;
					}else{
						pd=0;
					}
				}
				break;
			}
		}
		//cout<<sum<<" "<<lx<<" "<<rx<<" "<<pd<<" "<<ans<<endl;
		while(lq!=1||rq!=n){
			if(pd==0){//拓展左区间 
				lq-=1;lx-=s1[lq].len;
				if(lq==1&&rq==n){
					cout<<ans;
					return 0;
				}
				if(rx+1-mid>mid-lx){
					pd=0;
					continue;
				}else if(rx+1-mid<mid-lx){
					pd=1;
					if(s1[lq].let!=s1[rq+1].let){
						//cout<<lq<<" "<<rq<<" "<<lx<<" "<<rx<<" ";
						ans+=abs(2*mid-lx-rx-1);
						//cout<<ans<<endl;
					}
				}else{
					if(s1[lq-1].len>s1[rq+1].len){
						pd=1;
					}else{
						pd=0;
					}
				}
			}else{//拓展右区间 
				rq+=1;rx+=s1[rq].len;
				if(lq==1&&rq==n){
					cout<<ans;
					return 0;
				}
				if(rx+1-mid>mid-lx){
					pd=0;
					if(s1[rq].let!=s1[lq-1].let){
						ans+=abs(2*mid-lx-rx-1);
					}
				}else if(rx+1-mid<mid-lx){
					pd=1;
					continue;
				}else{
					if(s1[lq-1].len>s1[rq+1].len){
						pd=1;
					}else{
						pd=0;
					}
				}
			}
		}
	}else{
		long long mid1=leng/2,mid2=leng/2+1;
		long long sum=0,lx=0,rx=0,lq=0,rq=0,pd=0;
		for(int i=1;i<=n;i++){
			sum+=s1[i].len;
			if(sum>=mid1){
				lq=i;lx=sum-s1[i].len;
			}
			if(sum>=mid2){
				rq=i;rx=sum;
				break;
			}
		}
		if(rx+1-mid2>mid1-lx){
			pd=0;
			if(s1[rq].let!=s1[lq-1].let){
				//cout<<lq<<" "<<rq<<" "<<lx<<" "<<rx<<" ";
				ans+=abs(mid1+mid2-lx-rx-1);
				//cout<<ans<<endl;
			}
			if(s1[rq].let!=s1[lq].let){
				ans+=s1[lq].len;
			}
		}else if(rx+1-mid2<mid1-lx){
			pd=1;
			if(s1[lq].let!=s1[rq+1].let){
				//cout<<lq<<" "<<rq<<" "<<lx<<" "<<rx<<" ";
				ans+=abs(mid1+mid2-lx-rx-1);
				//cout<<ans<<endl;
			}
			if(s1[rq].let!=s1[lq].let){
				ans+=s1[rq].len;
			}
		}else{
			if(s1[lq-1].len>s1[rq+1].len){
				pd=1;
			}else{
				pd=0;
			}
			if(s1[rq].let!=s1[lq].let){
				ans+=s1[rq].len;
			}
		}
		while(lq!=1||rq!=n){
			if(pd==0){//拓展左区间 
				lq-=1;lx-=s1[lq].len;
				if(lq==1&&rq==n){
					cout<<ans;
					return 0;
				}
				if(rx+1-mid2>mid1-lx){
					pd=0;
					continue;
				}else if(rx+1-mid2<mid1-lx){
					pd=1;
					if(s1[lq].let!=s1[rq+1].let){
						//cout<<lq<<" "<<rq<<" "<<lx<<" "<<rx<<" ";
						ans+=abs(mid1+mid2-lx-rx-1);
						//cout<<ans<<endl;
					}
				}else{
					if(s1[lq-1].len>s1[rq+1].len){
						pd=1;
					}else{
						pd=0;
					}
				}
			}else{//拓展右区间 
				rq+=1;rx+=s1[rq].len;
				if(lq==1&&rq==n){
					cout<<ans;
					return 0;
				}
				if(rx+1-mid2>mid1-lx){
					pd=0;
					if(s1[rq].let!=s1[lq-1].let){
						//cout<<lq<<" "<<rq<<" "<<lx<<" "<<rx<<" ";
						ans+=abs(mid1+mid2-lx-rx-1);
						//cout<<ans<<endl;
					}
				}else if(rx+1-mid2<mid1-lx){
					pd=1;
					continue;
				}else{
					if(s1[lq-1].len>s1[rq+1].len){
						pd=1;
					}else{
						pd=0;
					}
				}
			}
		}
	}*/
	return 0;
}
