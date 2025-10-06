#include <iostream>
using namespace std;

class Animal {
public:
	void eat() {
		cout << "animal is eating" << endl;
	}
};

class Bird : public Animal {
public:
	void wings() {
		cout << "bird is flying" << endl;
	}
};

int main() {
	Bird b;
	b.eat();
	b.wings();
	return 0;
}    -