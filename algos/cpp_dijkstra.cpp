#include <iostream>
#include <ios>
#include <vector>
#include <queue>

using namespace std;
typedef long long       ll;
typedef pair<int, int>  ii;
typedef vector<ii>      vii;
typedef vector<int>     vi;
typedef pair<int, ii>   iii;

#define INF 1000000000 //1 billion
//#define _CRT_SECURE_NO_DEPRECATE //only for VC++
#define REP (i, a, b) for(int i = int(a); i <= int(b); i++)
#define ALL(x) x.begin(), x.end()
#define UNIQUE(c) (c).resize(unique(ALL(c)) - (c).begin())
#define EPS 1e-9
#define MAX_N 100010

int main(){
    int V, s;
    vi dist(V, INF);
    priority_queue<ii, vector<ii>, greater<ii>> pq;
    pq.push(ii(0, s));
    while(!pq.empty()){
        ii front = pq.top();
        pq.pop();
        int d = front.first;
        int u = front.second;
        if(d > dist[u]) continue;
    }
}
