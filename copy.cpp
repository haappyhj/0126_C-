#include<iostream>
#include<string>
using namespace std;

class Slime {
private:
	string name;
	int hp;

public:
	Slime(string n) {
		this->name = n;
		this->hp = 100;

	}

	Slime(const Slime& other) { //얕은 복사하기 위해 써야 함
		this->name = other.name;
		this->hp = other.hp;
	}

	void info() const {
		//this->name="asd"; 이름 변경 막아줌
		cout << this->name << "" << this->hp << endl;
	}
	void damaged(int damage) {
		this->hp -= damage;
	}


};

//얕은 복사?
int main() {
	const int a1 = 50;
	Slime a("일본");
	Slime b = a;

	a.damaged(30);
	b.info();
	return 0;

}