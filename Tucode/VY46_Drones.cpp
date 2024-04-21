#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

struct Drone {
    int x, y, id;

    Drone(int x, int y, int id) : x(x), y(y), id(id) {}
};

int main() {
    int n;
    cin >> n;
    vector<Drone> drones;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        drones.push_back(Drone(x, y, i + 1));
    }

    sort(drones.begin(), drones.end(), [](const Drone& a, const Drone& b) {
        return (a.x * a.x + a.y * a.y) < (b.x * b.x + b.y * b.y);
    });

    vector<int> destroyedDrones;

    for (int i = 0; i < n; i++) {
        if (drones[i].x <= 0 && drones[i].y <= 0) {
            destroyedDrones.push_back(drones[i].id);
        } else {
            cout << "-1" << endl;
            return 0;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << destroyedDrones[i] << " ";
    }

    return 0;
}
