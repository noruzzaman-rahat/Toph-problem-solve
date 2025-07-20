#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

// Point struct
struct Point {
    int x, y;
};

// ClosestPair class
class ClosestPair {
private:
    int N;
    vector<Point> points;

public:
    // Read input
    void readInput() {
        cin >> N;
        points.resize(N);
        for (int i = 0; i < N; i++) {
            cin >> points[i].x >> points[i].y;
        }
    }

    // Find minimum Euclidean distance
    double findClosestDistance() {
        double minDist = 1e18; // Very big number initially
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                double dx = points[i].x - points[j].x;
                double dy = points[i].y - points[j].y;
                double dist = sqrt(dx * dx + dy * dy); // ✅ Square Root must!
                if (dist < minDist) {
                    minDist = dist;
                }
            }
        }
        return minDist;
    }

    // Print result
    void printResult() {
        double result = findClosestDistance();
        cout << fixed << setprecision(12) << result << endl; // 12 decimal places for safety
    }
};

// Main function
int main() {
    ClosestPair cp;
    cp.readInput();
    cp.printResult();
    return 0;
}



