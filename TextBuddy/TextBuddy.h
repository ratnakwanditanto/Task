#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

class TextBuddy{

public:
	string fileName;
	int noSentences;
	vector<string> data;

public:
	void addData(string);
	void display();
	void Display(vector<string>,vector<int>);
	void clear();
	void deleteData(int&);
	void updateFile();

};
