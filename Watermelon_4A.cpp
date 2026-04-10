#include <iostream>

using namespace std;

int main() {
    int w;
    cin >> w;

    // الشرط: الوزن أكبر من 2 وزوجي
    if (w > 2 && w % 2 == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
