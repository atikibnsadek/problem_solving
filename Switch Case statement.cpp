#include<iostream>
using namespace std;

void circle(int radius){
	double area;
	area = 3.14 * radius * radius;
	cout << "area=" << area << endl;
}

void rectangle(int sides[]){
	int area = 1;
	for (int i = 0; i < 2; i++) {
		area *= sides[i];
	}
	cout << "area=" << area << endl;
}

int main(){
	int ch, a[2];
	cout << "ch=";
	cin >> ch;
	switch(ch){
		case 1:
			cout << "Enter radius: ";
			cin >> a[0];
			circle(a[0]);
			break;
		case 2:
			cout << "Enter length and breadth: ";
			for(int i = 0; i < 2; i++){
				cin >> a[i];
			}
			rectangle(a);
			break;
		default:
			cout << "Invalid choice" << endl;
	}

	return 0;
}
