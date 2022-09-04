#include<cstdio>
#include<cstring>
#include<vector>
using namespace std;
int n,tot,C[10];
void search(int cur){ 
	if(cur == n)tot++;
	else for(int i=0;i<n;++i){
		bool ok=true;
		C[cur]=i;
		for(int j=0;j<cur;++j)
	      if(C[cur]==C[j]||cur-C[cur]==j-C[j]||cur+C[cur]==j+C[j])
	      {ok=false;break;}
	      if(ok)search(cur+1);
	}
}
int main() {
  while(scanf("%d",&n)){
  	memset(C,0,sizeof(C));tot=0;
    search(0);printf("%d\n",tot);
  }
  return 0;
}
