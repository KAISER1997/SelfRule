//PASS


#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct node 
{
int x1;
int y1;
int dir;
int tim;
};


 




int main()
{
int m,n,k;
int store[1111][1111]={0};
int arr[1111][1111]={0};
cin>>m>>n>>k;
cin.ignore();
for(int t=0;t<m;t++)
{
for(int t1=0;t1<n;t1++)
{
char a=getchar();
if(a=='.')
arr[t][t1]=0;
else arr[t][t1]=-1;
store[t][t1]=9999999;
}
getchar();
}
int x1,x2,y1,y2;
cin>>x1>>y1>>x2>>y2;
queue<struct node > qq;
--x1;--y1;--x2;--y2;
store[x1][y1]=0;
struct node h;
h.x1=x1;
h.y1=y1;
h.dir=0;
h.tim=0;
qq.push(h);
int dir[1111][1111]={0};
while(!qq.empty())
{
struct node xd=qq.front();
int x=xd.x1;
int y=xd.y1;
 
int time=xd.tim;
qq.pop();
int g=0,g1=0,g2=0,g3=0;
for(int t=1;t<=k;t++)
{   
	 
if(x+t<m && arr[x+t][y]==0 && store[x+t][y]>=time+1 && dir[x+t][y]!=2)
{
h.x1=x+t;
h.y1=y;
dir[x+t][y]=2;
h.tim=time+1;
//cout<<h.x1<<" "<<h.y1<<" "<<h.tim<<endl;
store[x+t][y]=time+1;
qq.push(h);
if(x+t==x2 && y==y2)
break;
}
else
break;
 }
 for(int t=1;t<=k;t++)
{  
 
if(y+t<n && arr[x][y+t]==0 && store[x][y+t]>=time+1 && dir[x][y+t]!=1  )
{
	dir[x][y+t]=1;
h.x1=x;
h.y1=y+t;
h.tim=time+1;
//cout<<h.x1<<" "<<h.y1<<" "<<h.tim<<endl;
qq.push(h);
store[x][y+t]=time+1;
if(x==x2 && y+t==y2)
break;
}
else
break;
 }
 for(int t=1;t<=k;t++)
{  
 

if(x-t>=0 && arr[x-t][y]==0 && store[x-t][y]>=time+1 && dir[x-t][y]!=-2   )
{
	dir[x-t][y]=-2;
h.x1=x-t;
h.y1=y;
h.tim=time+1;
//cout<<h.x1<<" "<<h.y1<<" "<<h.tim<<endl;
qq.push(h);
store[x-t][y]=time+1;
if(x-t==x2 && y==y2)
break;
}
else
break;
 }
 for(int t=1;t<=k;t++)
{  
 
if(y-t>=0 && arr[x][y-t]==0 && store[x][y-t]>=time+1 && dir[x][y-t]!=-1 )
{
	dir[x][y-t]=-1;
h.x1=x;
h.y1=y-t;
h.tim=time+1;
//cout<<h.x1<<" "<<h.y1<<" "<<h.tim<<endl;
qq.push(h);
store[x][y-t]=time+1;
if(x==x2 && y-t==y2)
break;
}
else
break;


}
}
if(store[x2][y2]!=9999999)
cout<<store[x2][y2];
else
cout<<"-1";




}




 













 