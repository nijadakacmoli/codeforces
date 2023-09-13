#include <iostream>
#include <cstring>
#include <cmath>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <unordered_map>
#include <deque>
#include <list>
#include <iterator>
#include <utility>
#include <errno.h>
 
using namespace std;
 
void solve(){
 int x,c;cin>>x>>c;
 int a[x];
 map<int,int>m;
 for(int i=0;i<x;i++){
   cin>>a[i];
   m[a[i]]++;
 }
 int answer=0;
 for(auto &g:m){
   answer+=min(g.second,c);
 }
 cout<<answer<<endl;
}
int main()
{
 int t,totalt;
 cin>>t;
 totalt=t;
 while(t--)
 {
   solve();
 }
 return 0;
}
 
 
