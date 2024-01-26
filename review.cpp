#include<iostream>
#include<string>
using namespace std;

class BankAccount {
private:
    string owner;
    int idNumber;
    int balance;

public:

    BankAccount(string o,int b) {
        this->owner = o;
        this->idNumber = 1;
        this->balance = b;
    }

    void withdraw() {
        int money;
        cout << "얼마 빼실건가요? " << endl;
        cin >> money;

        if (this->balance < money) {
            cout << "꺼낼 수가 없음 " << endl;
        }
        else {
            this->balance -= money; //갱신하기
            cout << balance << " 원 남았습니다" << endl;
        }
    }

    void deposit() {
        int money;
        cout << "얼마 넣으실건가요? " << endl;
        cin >> money;
        this->balance += money; //갱신하기
        cout << this->balance << " 원이 총 잔고입니다  " << endl;
    }

    void checkBalance() {
        cout << this->balance << " 원이 총 잔고입니다  " << endl;
    }
};

int main() {
    BankAccount a("hj", 10000);

    a.withdraw();
    a.deposit();
    a.checkBalance();

    return 0;
}
