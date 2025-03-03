#include <iostream>
using namespace std;

class Box {
private:
    double length;
    double width;
    double height;

public:
    // 带参数的构造函数
    Box(double l, double w, double h) : length(l), width(w), height(h) {}

    // 成员函数
    void inputDataAndCalculate() {
        cout << "请输入长、宽、高（用空格分隔）：";
        cin >> length >> width >> height;
        double volume = length * width * height;
        cout << "体积为：" << volume << endl;
    }
};

int main() {
    // 创建三个Box对象
    Box box1(0, 0, 0);
    Box box2(0, 0, 0);
    Box box3(0, 0, 0);

   
    cout << "输入第一个长方柱的数据：" << endl;
    box1.inputDataAndCalculate();

    cout << "\n输入第二个长方柱的数据：" << endl;
    box2.inputDataAndCalculate();

    cout << "\n输入第三个长方柱的数据：" << endl;
    box3.inputDataAndCalculate();

    return 0;
}
