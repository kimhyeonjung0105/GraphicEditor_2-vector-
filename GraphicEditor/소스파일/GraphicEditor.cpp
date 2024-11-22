#include <iostream>
#include <vector>
using namespace std;

#include "Shape.h"
#include "Circle.h"
#include "Line.h"
#include "Rect.h"
#include "UI.h"
#include "GraphicEditor.h"

GraphicEditor::GraphicEditor() {}

void GraphicEditor::create(int num) {
	switch (num) {
	case 1:
		v.push_back(new Line());
		break;
	case 2:
		v.push_back(new Circle());
		break;
	case 3:
		v.push_back(new Rect());
		break;
	default:
		cout << "입력 에러" << endl;
		break;
	}
}

void GraphicEditor::indelete(int num) {
	Shape* del;
	it = v.begin();
	for (int i = 0; i < num; ++i)
		++it;
	del = *it;
	it = v.erase(it);
	delete del;
}

void GraphicEditor::call() {
	int i = 0;
	bool exit = true;
	cout << "그래픽 에디터입니다." << endl;
	while (exit) {
		switch (menu()) {
		case 1:
			create(input());
			break;
		case 2:
			indelete(UI::del());
			break;
		case 3:
			for (int i = 0; i < v.size(); ++i) {
				cout << i << ": ";
				v.at(i)->paint();
			}
			break;
		case 4:
			exit = false;
			break;
		}
	}
}