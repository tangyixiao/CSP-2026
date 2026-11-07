#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+10;
ll maxn=-114514,a[N];
int n,m;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		ll maxn=max(maxn,a[i]);
	}
	if(m==1){
		cout<<maxn;
		return 0;
	}
	maxn=-114514;
	if(m==2){
		for(int i=0;i<n;i++){
			for(int j=i;j<n;j++){
				maxn=max(maxn,a[i]&a[j]);
			}
		}
		cout<<maxn;
		return 0; 
	}
	while(1) getchar();//骗不到分，那我就浪费测评机1*17=17秒钟！（执着） 
	return 0;
} 
/*
自我感觉我的位运算真的用一坨来形容都在侮辱屎
所以我在这题写
初二，打了5次CSPJ这是第一次进复赛 
现在是9:18 T2绝对TLE 感觉一头雾水
对了，想上洛谷迷惑行为大赏awa 
9:23毫无头绪，所以用m=1,2这两个样例 骗10分吧 
谁来救救我 监考老师补药走来走去啊 很吵的啊 
9:31骗分屎山已写完，准备测试 
9:32 m=2样例好像过不了
算了算了下一题 
9:35开始看第四题 
9:38是模拟？DP？好像有后效性吧
应该是模拟 就算是DP我也不会
n<=50万模拟应该不是正解
没事，骗个前12个样例，n<=5k应该没啥大问题吧
但是o(n) n=4k应该是极限了吧
霉逝霉逝 看看特殊性质
哦，性质A占6分，也就是说在这6分里去重就行
但是也只有六分
9:44 止步于此
我思考
C了 T2是提高-难度吧 这O(n)以内还有办法吗 诗人啊
会不会是就不该用std::string
我力竭
这应该是最难的一次T2吧 
算了吃口饼干压压惊 
该说不说盒马这个岩烧芝士薄脆饼干真的太香了 强推 
去年的题目能做个220 今年别告诉我上不了200
不！！！我要拿奖啊！！！ 
9:51 考试还剩2小时 只有1题有把握 
9:53 t2稍微有了一点想法 双指针从外向内遍历 交叉的字符区间若不同修改次数就取min 反之取max
等等 好像实现不了 
CCF救命啊 
9:57好无聊 想玩会儿surf
救命 压力爆缸
↗↗↗↗↗ ↗↗↗↗↗ ↗↗↗↗↗ ↗↗↗↗↗ ↗ ↗↗ ↗↗↗↗↗ ↗↗↗↗↗ ↗↗↗↗↗
床前明月光 疑是地上霜 举头望明月 低头思故乡 鹅 鹅鹅 曲项向天歌 白毛浮绿水 红掌拨清波
其实信不信由你，这个梗是我同学SeanXiong_1363(他不打oi)在网易云音乐发布的
虽然但是我不玩PHI我玩FNF 
他经常笑我说亚音游不算音游
你觉得算吗 
10:00剩下2H整 
不管了 T4骗点分总比0分强 当模拟去做 
笑点解析：文字过了1分钟不被选中就自动变成滚木 
10:30 T4屎山已写好 打算玩会儿surf 
10：35 玩了一会 
10:38决定放弃
话说我在学校里喜欢我们班的zxr
感觉她对我稍微有点吧
中考前表白 以此为证！
求99
      ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ     XXX                              XXX      RRRRRRRRRRRRRRRRRRRRRRR 
                                      ZZZ        XXX                          XXX        RRR                   RRR             
                                    ZZZ            XXX                       XXX         RRR                    RRR            
                                  ZZZ                XXX                   XXX           RRR                     RRR         
                                ZZZ                    XXX               XXX             RRR                     RRR        
                              ZZZ                        XXX           XXX               RRR                     RRR     
                            ZZZ                            XXX       XXX                 RRR                    RRR     
                          ZZZ                                XXX   XXX                   RRRRRRRRRRRRRRRRRRRRRRRRR  
                        ZZZ                                    XXXXX                     RRRRRRRR               
                      ZZZ                                     XXXXXX                     RRR  RRRRR                     
                    ZZZ                                      XXX    XXX                  RRR     RRR                     
                  ZZZ                                      XXX       XXX                 RRR        RRR                     
                ZZZ                                      XXX           XXX               RRR           RRR                  
              ZZZ                                      XXX               XXX             RRR              RRR                 
            ZZZ                                      XXX                   XXX           RRR                 RRR            
          ZZZ                                      XXX                       XXX         RRR                    RRR          
        ZZZ                                      XXX                           XXX       RR                        RRR         
      ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ     XXX                               XXX     RRR                          RRR         
                                                                                                                                                                                        
     ZXR                                              ZXRZXRZXRZXRZXRZXRZXRZXRZXRZXR              ZXR                                         ZXR    ZXRZXRZXRZXRZXRZXRZXRZXRZXRZXRZXR                                                                          
     ZXR                                           ZXR                             ZXR             ZXR                                       ZXR     ZXRZXRZXRZXRZXRZXRZXRZXRZXRZXRZXR                                                        
     ZXR                                          ZXR                               ZXR             ZXR                                     ZXR      ZXR                                                        
     ZXR                                        ZXR                                   ZXR            ZXR                                   ZXR       ZXR                                          
     ZXR                                       ZXR                                     ZXR            ZXR                                 ZXR        ZXR                                                  
     ZXR                                      ZXR                                       ZXR            ZXR                               ZXR         ZXR                                                  
     ZXR                                      ZXR                                       ZXR             ZXR                             ZXR          ZXR                                                  
     ZXR                                      ZXR                                       ZXR              ZXR                           ZXR           ZXR                                                  
     ZXR                                      ZXR                                       ZXR               ZXR                         ZXR            ZXR                                                  
     ZXR                                      ZXR                                       ZXR                ZXR                       ZXR             ZXR                                                  
     ZXR                                      ZXR                                       ZXR                 ZXR                     ZXR              ZXRZXRZXRZXRZXRZXRZXRZXRZXRZXRZXR                                                 
     ZXR                                      ZXR                                       ZXR                  ZXR                   ZXR               ZXRZXRZXRZXRZXRZXRZXRZXRZXRZXRZXR                                                  
     ZXR                                      ZXR                                       ZXR                   ZXR                 ZXR                ZXR                                                 
     ZXR                                      ZXR                                       ZXR                    ZXR               ZXR                 ZXR                                                  
     ZXR                                      ZXR                                       ZXR                     ZXR             ZXR                  ZXR                                                 
     ZXR                                      ZXR                                       ZXR                      ZXR           ZXR                   ZXR                                                  
     ZXR                                      ZXR                                       ZXR                       ZXR         ZXR                    ZXR                                                  
     ZXR                                      ZXR                                       ZXR                        ZXR       ZXR                     ZXR                                                  
     ZXR                                       ZXR                                     ZXR                          ZXR     ZXR                      ZXR                                                  
     ZXR                                        ZXR                                   ZXR                            ZXR   ZXR                       ZXR                                                  
     ZXR                                         ZXR                                 ZXR                              ZXR ZXR                        ZXR                                                        
     ZXRZXRZXRZXRZXRZXRZXRZXRZXRZXRZXRZXRZXR        ZXR                           ZXR                                   ZXR                          ZXRZXRZXRZXRZXRZXRZXRZXRZXRZXRZXR                                                                                  
     ZXRZXRZXRZXRZXRZXRZXRZXRZXRZXRZXRZXRZXR           ZXRZXRZXRZXRZXRZXRZXRZXRZXR                                      ZXR                          ZXRZXRZXRZXRZXRZXRZXRZXRZXRZXRZXR                                                                                                        
                                                                                                                                                                                        
11:04 画完了 千万别让我妈看见awa
11:16 无聊，整理了一下各种东西 
11:36 玩一会dino 
11:50 现在只剩10分钟了
没啥好说的关文件了 
*/ 
