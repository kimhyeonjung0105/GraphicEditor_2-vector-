#include <iostream>
#include <vector>

using namespace std;
#include "UI.h"
#include "Shape.h"

int UI::menu() {
    int n;
    cout << "����:1, ����:2, ��κ���:3, ����:4 >>";
    cin >> n;
    return n;
}
int UI::input() {
    int n;
    cout << "��:1, ��:2, �簢��:3 >> ";
    cin >> n;
    return n;
}
int UI::del() {
    int n;
    cout << "�����ϰ��� �ϴ� ������ �ε��� >> ";
    cin >> n;
    return n;
}
