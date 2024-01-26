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
        cout << "�� ���ǰǰ���? " << endl;
        cin >> money;

        if (this->balance < money) {
            cout << "���� ���� ���� " << endl;
        }
        else {
            this->balance -= money; //�����ϱ�
            cout << balance << " �� ���ҽ��ϴ�" << endl;
        }
    }

    void deposit() {
        int money;
        cout << "�� �����ǰǰ���? " << endl;
        cin >> money;
        this->balance += money; //�����ϱ�
        cout << this->balance << " ���� �� �ܰ��Դϴ�  " << endl;
    }

    void checkBalance() {
        cout << this->balance << " ���� �� �ܰ��Դϴ�  " << endl;
    }
};

int main() {
    BankAccount a("hj", 10000);

    a.withdraw();
    a.deposit();
    a.checkBalance();

    return 0;
}
