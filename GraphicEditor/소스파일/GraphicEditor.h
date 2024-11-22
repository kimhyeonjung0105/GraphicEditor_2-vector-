#pragma once
#include <vector>

class GraphicEditor : public UI {
	vector<Shape*> v;
	vector<Shape*>::iterator it;
public:
	GraphicEditor();
	void create(int num);
	void indelete(int num);
	void call();
};