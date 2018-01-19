#include <iostream>
#include <vector>
#include<algorithm>
#include<stdio.h>
using namespace std;
//https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/tutorial/
vector <long int> adj[100000];
bool visited[100000];

void dfs(int s) {
        visited[s] = true;
        for(int i = 0;i < adj[s].size();++i)    {
         if(visited[adj[s][i]] == false)
             dfs(adj[s][i]);
        }
  }

void initialize() {
        for(int i = 0;i < 10;++i)
        {
         visited[i] = false;
        }
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
      long int n,q,i,j,k,temp=0;
      scanf("%ld%ld",&n,&q);
      for(i=1;i<n;i++)
      {
         scanf("%ld%ld",&temp,&k);
         adj[temp].push_back(k);
         adj[k].push_back(temp);
      }
    }
    return 0;
}
