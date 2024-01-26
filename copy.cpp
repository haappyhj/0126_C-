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

	Slime(const Slime& other) { //���� �����ϱ� ���� ��� ��
		this->name = other.name;
		this->hp = other.hp;
	}

	void info() const {
		//this->name="asd"; �̸� ���� ������
		cout << this->name << "" << this->hp << endl;
	}
	void damaged(int damage) {
		this->hp -= damage;
	}


};

//���� ����?
int main() {
	const int a1 = 50;
	Slime a("�Ϻ�");
	Slime b = a;

	a.damaged(30);
	b.info();
	return 0;

}