#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> adjMatrix(int n, int m){
	vector<vector<int>> adj(n + 1, vector<int>(n + 1, 0));
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		adj[u][v] = 1;
		adj[v][u] = 1;
	}
	return adj;
}
vector<vector<int>> adjList(int n, int m) {
	vector<vector<int>> adjList(n + 1);
	for (int i = 0; i < m;i++) {
		int u, v;
		cin >> u >> v;
		adjList[u].push_back(v);
		adjList[v].push_back(u);
	}
	return adjList;
}

// 测试邻接矩阵的函数
void testAdjMatrix(const vector<vector<int>>& adj, int n) {
    cout << "\n邻接矩阵内容：" << endl;
    cout << "  ";  // 第一行前的空格，用于对齐顶点编号
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;
    for (int i = 1; i <= n; i++) {
        cout << i << " ";  // 行号（顶点编号）
        for (int j = 1; j <= n; j++) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
}

// 测试邻接表的函数
void testAdjList(const vector<vector<int>>& adjList, int n) {
    cout << "\n邻接表内容：" << endl;
    for (int i = 1; i <= n; i++) {
        cout << "顶点 " << i << " 连接的顶点：";
        for (int v : adjList[i]) {
            cout << v << " ";
        }
        cout << endl;
    }
}

int main() {
    int n, m;
    cout << "请输入顶点数n和边数m：";
    cin >> n >> m;

    // 测试邻接矩阵
    cout << "请输入" << m << "条边（格式：u v）：" << endl;
    vector<vector<int>> matrix = adjMatrix(n, m);
    testAdjMatrix(matrix, n);

    // 重新输入边用于测试邻接表（实际应用中可复用输入，这里为了清晰分开测试）
    cout << "\n请再次输入" << m << "条边（格式：u v）：" << endl;
    vector<vector<int>> list = adjList(n, m);
    testAdjList(list, n);

    return 0;
}