//fail
//spoj-kquery
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct node
{
long long int a;
long long int b;
long long int c;
long long int d;
};
long long int n;
bool fire(struct node x, struct node y)
{

	if(x.c!=y.c)
	return(x.c>y.c);
    else
    	return(x.a>y.a);
} 

long long int store[30009]={0};
long long int arr[30009]={0};
void update(long long int index,long long int element)
{
while(index<=n)
{
 
store[index]=store[index]+1;
//cout<<index<<" "<<element<<endl;
index=index+(index&(-1*index));
}
}
long long int  query(long long int start,long long int stop)
{
long long int index1=start-1;
long long int index2=stop;
long long int sum1=0,sum2=0;
while(index1>0)
{
sum1=sum1+store[index1];
index1=index1-(index1&(-1*index1));
}

while(index2>0)
{
sum2=sum2+store[index2];
index2=index2-(index2&(-1*index2));
}
return(sum2-sum1);
}

int main()
{

long long int q=100005;
long long int u;
cin>>n;
struct node i;
vector<struct node> ww;
i.c=q;
ww.push_back(i);
for(long long int l=1;l<=n;l++)
{
cin>>u;
i.a=-1;
i.b=l;
i.c=u;
ww.push_back(i);
}

long long int k;
cin>>k;
for(long long int l=1;l<=k;l++)
{
cin>>i.a>>i.b>>i.c;
i.d=l;
ww.push_back(i);
}
long long int ans[30009]={0};
sort(ww.begin()+1,ww.end(),fire);
// for(int op=1;op<ww.size();op++)
// cout<<ww[op].a<<" "<<ww[op].b<<" "<<ww[op].c<<endl;
for(long long int h=1;h<ww.size();h++)
{
	if(ww[h].a==-1)
{update(ww[h].b,ww[h].c);


}
else
{
ans[ww[h].d]=query(ww[h].a,ww[h].b);
}

}
for(long long int y=1;y<=k;y++)
	cout<<ans[y]<<endl;







}









 