class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination){
        vector<vector<int>>list(n);

        for(int i = 0; i < edges.size(); i++){
            int index = edges[i][0];
            int v = edges[i][1];

            list[index].push_back(v);
            list[v].push_back(index);
        }

        vector<bool>visited(n, false);
        queue<int>q;

        q.push(source);
        visited[source] = true;

        while(!q.empty()){
            int f = q.front();
            q.pop();

            for(int i = 0; i < list[f].size(); i++){
                int nbr = list[f][i];
                if(!visited[nbr]){
                    visited[nbr] = true;
                    q.push(nbr);
                }
            }
        }
        return visited[destination];

    }
};