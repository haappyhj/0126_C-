#include<iostream>
#include<string>
using namespace std;

class Time {
private:
	int sec;
	int min;
	int hour;

public:
	Time() {
		this->sec = 0;
		this->min = 0;
		this->hour = 0;
	}

	//plusSEc
	//plusMin
	//plusHour

	void Plussec() {
		this->sec++;
		if (this->sec == 60) {
			this->sec = 0;
			this->Plusmin();
		}
	}

	void Plusmin() {
		this->min ++;
		if (this->min == 60) {
			this->min = 0;
			this->PlusHour();
		}
	}

	void PlusHour() {
		this->hour++;
		if (this->hour == 24) {
			this->min = 00;
		}
	}

	void timecheck() {
		

		cout << (hour < 10 ? "0" : ":") << hour << ":"
			<< (min < 10 ? "0" : ":") << min << ":"
			<< (sec < 10 ? "0" : ":") << sec << endl;
	}

};

int main() {
	Time time;
	for (int i = 0; i < 20000; i++) {
		time.timecheck();
		time.Plussec();
	}
}