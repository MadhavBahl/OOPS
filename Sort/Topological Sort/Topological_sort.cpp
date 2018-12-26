#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define pb push_back
#define mp make_pair
#define PI 3.14159265358979323
#define debug(x) cout<<"Case "<<x<<": "
#define sync ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
typedef long long int           ll;
typedef long double             ld;
typedef unsigned long long int ull;
typedef vector <int>            vi;
typedef vector <ll>            vll;
typedef pair <int, int>        pii;
typedef pair <ll, ll>          pll;
typedef vector < pii >        vpii;
typedef vector < pll >        vpll;
typedef vector <string>         vs;

//cyber_rajat

//to calculate in degree
vector<int> indegree(int n,vector<vector<int>>adj)
{
    vector<int>a(n,0);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<adj[i].size();j++)
        {
            a[adj[i][j]]++;
        }
    }
    return a;
}
vector <int > topological_sort(int n,vector<int>in_degree,vector<vector<int>>adj)
{
    vector<int>sort;
    bool visited[n]={false};
    queue<int>q;
    for(int i=0;i<in_degree.size();i++)
    {
        if(in_degree[i]==0)
           q.push(i);
    }
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        
        visited[u]=true;
        //update indegree of adjacent vertices
        //push next 0 degree vertex to queue 
        for(int j=0;j<adj[u].size();j++)
        {
            int v = adj[u][j];
            in_degree[v]--;
            if(in_degree[v]==0 && !visited[v])
              q.push(v);
        }
        sort.push_back(u);
    }
    return sort;
}
int main()
{
    int n,m,u,v;
    cin>>n>>m;

    vector<int>temp;
    vector<vector<int>>adj(n,temp);
    for(int i=0;i<m;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
    } 
    //to find the in degree of each vertex
    vector<int>in_degree(n,0);
    in_degree=indegree(n,adj);
    vector<int > sort=topological_sort(n,in_degree,adj);
    
    if(sort.size()!=n)
    {
        cout<<"Toposort is not possible since there is atleast one cycle"<<endl;
    }
    else
    {
        for(int i=0;i<sort.size();i++)
        {
            cout<<sort[i]<<" ";
        }
    }
}
