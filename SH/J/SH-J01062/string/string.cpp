#include<iostream>
#include<vector>
using namespace std;
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/
struct zichuan{
	long long times;
	char letters;
}whole[200010];
vector<zichuan>lef;
vector<zichuan>righ;
long long n,index=-1,li,ri,lastl,lastr;
char lcl,lcr;
long long half=0,sum=0,answer=0;
bool jingwei=0;
char last_letter=' ';
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	for(long long i=0;i<n;i++){
		long long num;
		char letter;
		scanf("%lld %c",&num,&letter);
		half+=num/2;
		if(num%2==1){
			if(jingwei==1){
				half++;
				jingwei=0;
			}else{
				jingwei=1;
			}
		}
		if(letter==last_letter){//顺便简化一下吧,快一点 
			whole[index].times+=num;
		}else{
			index++;
			whole[index].times=num;
			whole[index].letters=letter;
			last_letter=letter;
		}
	}
	if(n==1){
		printf("0");
		fclose(stdin);
		fclose(stdout);	
		return 0;
	}
	if(jingwei==1){//L长度为单数,从1开始 
		half++;
		for(long long i=0;i<=index;i++){
			if(sum+1<=half&&sum+whole[i].times>=half){//开始切分 
				for(long long j=0;j<i;j++){//左段 
				 	zichuan ls;
				 	ls.times=whole[j].times;
				 	ls.letters=whole[j].letters;
				 	lef.push_back(ls);
				}
				zichuan ls;
				ls.times=half-sum-1;
				ls.letters=whole[i].letters;
				if(ls.times!=0)lef.push_back(ls);
				zichuan ls2;
				ls2.times=sum+whole[i].times-half;
				ls2.letters=whole[i].letters;
				if(ls2.times!=0)righ.push_back(ls2);
				for(long long j=i+1;j<=index;j++){
					zichuan ls3;
					ls3.times=whole[j].times;
					ls3.letters=whole[j].letters;
					righ.push_back(ls3);
				}
				break;
			}else{
				sum+=whole[i].times;
			}
		} 
	}else{//长度为双数 
		for(long long i=0;i<=index;i++){
			if(sum+1<=half&&sum+whole[i].times>=half){//开始切分,注意:half有可能在末尾
				for(long long j=0;j<i;j++){//左段 
				 	zichuan ls;
				 	ls.times=whole[j].times;
				 	ls.letters=whole[j].letters;
				 	lef.push_back(ls);
				}
				zichuan ls;
				ls.times=half-sum;
				ls.letters=whole[i].letters;
				if(ls.times!=0)lef.push_back(ls);
				zichuan ls2;
				ls2.times=sum+whole[i].times-half;
				ls2.letters=whole[i].letters;
				if(ls2.times!=0)righ.push_back(ls2);
				for(long long j=i+1;j<=index;j++){
					zichuan ls3;
					ls3.times=whole[j].times;
					ls3.letters=whole[j].letters;
					righ.push_back(ls3);
				}
				break; 
			}else{
				sum+=whole[i].times;
			}
		}
	}//切分完毕
	while(li<lef.size()||ri<righ.size()){
		long long left1,right1;
		char cl,cr;
		if(lastl>0){
			left1=lastl;
			cl=lcl;
			lastl=0;
		}else{
			left1=lef[li].times;
			cl=lef[li].letters;
			li++;
		}
		if(lastr>0){
			right1=lastr;
			cr=lcr;
			lastr=0;
		}else{
			right1=righ[ri].times;
			cr=righ[ri].letters;
			ri++;
		}
		if(cl==cr){
			if(left1>right1){
				lastl=left1-right1;
				lcl=cl;
			}else if(left1<right1){
				lastr=right1-left1;
				lcr=cr;
			}
		}else{
			if(left1>right1){
				lastl=left1-right1;
				lcl=cl;
				answer+=right1;
			}else if(left1<right1){
				lastr=right1-left1;
				lcr=cr;
				answer+=left1;
			}else{
				answer+=left1;
			}
		}
	}
	printf("%lld",answer);
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
