#include <iostream>
#include <vector>
using namespace std;

class GridRotator {
private:
    int M, N;
    vector<vector<int>> grid;

public:
    void readInput() {
        cin >> M >> N;
        grid.resize(M, vector<int>(N));
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                cin >> grid[i][j];
            }
        }
    }

    void rotateAt(int r, int c) {


        int neighbors[8];
        neighbors[0] = grid[r-1][c-1];
        neighbors[1] = grid[r-1][c];
        neighbors[2] = grid[r-1][c+1];
        neighbors[3] = grid[r][c+1];
        neighbors[4] = grid[r+1][c+1];
        neighbors[5] = grid[r+1][c];
        neighbors[6] = grid[r+1][c-1];
        neighbors[7] = grid[r][c-1];


        grid[r-1][c-1] = neighbors[7];
        grid[r-1][c]   = neighbors[0];
        grid[r-1][c+1] = neighbors[1];
        grid[r][c+1]   = neighbors[2];
        grid[r+1][c+1] = neighbors[3];
        grid[r+1][c]   = neighbors[4];
        grid[r+1][c-1] = neighbors[5];
        grid[r][c-1]   = neighbors[6];
    }

    void printGrid() {
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                cout << grid[i][j];
                if (j != N -1) cout << " ";
            }
            cout << "\n";
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    GridRotator gr;
    gr.readInput();

    int Q;
    cin >> Q;
    for (int i = 0; i < Q; i++) {
        int r, c;
        cin >> r >> c;
        gr.rotateAt(r, c);
        gr.printGrid();
    }

    return 0;
}

