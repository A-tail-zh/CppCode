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

// �����ڽӾ���ĺ���
void testAdjMatrix(const vector<vector<int>>& adj, int n) {
    cout << "\n�ڽӾ������ݣ�" << endl;
    cout << "  ";  // ��һ��ǰ�Ŀո����ڶ��붥����
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;
    for (int i = 1; i <= n; i++) {
        cout << i << " ";  // �кţ������ţ�
        for (int j = 1; j <= n; j++) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
}

// �����ڽӱ�ĺ���
void testAdjList(const vector<vector<int>>& adjList, int n) {
    cout << "\n�ڽӱ����ݣ�" << endl;
    for (int i = 1; i <= n; i++) {
        cout << "���� " << i << " ���ӵĶ��㣺";
        for (int v : adjList[i]) {
            cout << v << " ";
        }
        cout << endl;
    }
}

int main() {
    int n, m;
    cout << "�����붥����n�ͱ���m��";
    cin >> n >> m;

    // �����ڽӾ���
    cout << "������" << m << "���ߣ���ʽ��u v����" << endl;
    vector<vector<int>> matrix = adjMatrix(n, m);
    testAdjMatrix(matrix, n);

    // ������������ڲ����ڽӱ�ʵ��Ӧ���пɸ������룬����Ϊ�������ֿ����ԣ�
    cout << "\n���ٴ�����" << m << "���ߣ���ʽ��u v����" << endl;
    vector<vector<int>> list = adjList(n, m);
    testAdjList(list, n);

    return 0;
}