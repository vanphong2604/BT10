﻿#include <iostream>

using namespace std;

struct Point
{
	int x,y;
	void Print()
	{
		cout<<&x<<" "<<&y;
	}
};

int main()
{
	Point p;
	cin>>p.x>>p.y;
	p.Print();
	system("pause");
	return 0;
}

//với mỗi biến in ra địa chỉ khác nhau