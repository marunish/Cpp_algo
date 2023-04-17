#include <iostream>

using namespace std;

int main() {
    double x = 0, y = 0; // 初期値
    double x1, y1;
    double eps = 0.0001; // 収束条件
    int iter = 0;
    int maxIter = 1000; // 最大反復回数

    // 収束するか、最大反復回数に達するまで反復する
    while (iter < maxIter) {
        x1 = (13 - 4 * y) / 5; // 1つ目の方程式からxを求める
        y1 = (8 - 2 * x1) / 3; // 2つ目の方程式からyを求める

        // 収束条件を満たしていれば反復を終了する
        if (abs(x1 - x) < eps && abs(y1 - y) < eps) {
            break;
        }

        x = x1;
        y = y1;
        iter++;
    }

    // 解を表示する
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}
//このコードでは、初期値を0とし、収束条件をeps = 0.0001として、最大反復回数を1000回に設定しています。反復ごとに、1つ目の方程式からxを求め、2つ目の方程式からyを求めます。そして、収束条件を満たしている場合は反復を終了します。最後に、解を表示します。





