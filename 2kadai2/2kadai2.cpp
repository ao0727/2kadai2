#include <iostream>
#include <vector>
using namespace std;

// 関数テンプレートの定義
template<typename T>
T triangleArea(T base, T height) {
    return (base * height) / static_cast<T>(2);
}

int main() {
    //Q.1
    int base_i = 4;
    int height_i = 6;
    cout << triangleArea(base_i, height_i) << endl;

    //Q.2
    float base_f = 10.2f;
    float height_f = 2.3f;
    cout << triangleArea(static_cast<int>(base_f), static_cast<int>(height_f)) << endl;



    /*/Q.5
    vector<int> numbers; // 整数を格納するVector

    //整数を入力してVectorに追加
    cout << "整数を入力 (終了するには負の数を入力): ";
    int num;
    while (cin >> num && num >= 0) {
        numbers.push_back(num);
    }

    // Vectorに格納された整数を出力
    cout << "入力された整数: ";
    for (int n : numbers) {
        cout << n << " ";
    }
    cout << endl;*/

    //Q.6
    int num = 1;

    // 2の倍数を1024まで表示する
    while (num <= 1024) {
        cout << num << endl;
        num = num << 1; 
    }


}
 