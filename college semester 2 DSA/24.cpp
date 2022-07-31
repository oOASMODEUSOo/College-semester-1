#include <bits/stdc++.h>
using namespace std;
#define N 100005
const int MAXI = 99999999;

void add_edge(vector<pair<int, int>> gr[], int x,
              int y, int weight)
{
    gr[x].push_back({y, weight});
    gr[y].push_back({x, weight});
}
int minDistance(vector<pair<int, int>> gr[], int n,
                int dist[], int vis[], int a[], int k);

int main()
{

    int n = 5, m = 5;

    vector<pair<int, int>> gr[N];

    add_edge(gr, 1, 2, 3);
    add_edge(gr, 1, 2, 3);
    add_edge(gr, 2, 3, 4);
    add_edge(gr, 3, 4, 1);
    add_edge(gr, 4, 5, 8);

    int k = 3;

    int a[N], vis[N], dist[N];
    a[1] = a[3] = a[5] = 1;

    cout << minDistance(gr, n, dist, vis, a, k);

    return 0;
}

int minDistance(vector<pair<int, int>> gr[], int n,
                int dist[], int vis[], int a[], int k)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>,
                   greater<pair<int, int>>>
        q;

    int ans = MAXI;

    for (int i = 1; i <= n; i++)
    {
        if (!a[i])
            continue;

        for (int j = 1; j <= n; j++)
        {
            dist[j] = MAXI;
            vis[j] = 0;
        }

        dist[i] = 0;

        while (!q.empty())
            q.pop();

        q.push({0, i});

        int good = 0;

        while (!q.empty())
        {
            int v = q.top().second;

            q.pop();

            if (vis[v])
                continue;
            vis[v] = 1;
            good += a[v];

            if (dist[v] > ans)
                break;

            if (good == 2 and a[v])
            {
                ans = min(ans, dist[v]);
                break;
            }

            for (int j = 0; j < gr[v].size(); j++)
            {
                int to = gr[v][j].first;
                int weight = gr[v][j].second;

                // if distance is less
                if (dist[v] + weight < dist[to])
                {
                    dist[to] = dist[v] + weight;
                    q.push({dist[to], to});
                }
            }
        }
    }

    return ans;
}
