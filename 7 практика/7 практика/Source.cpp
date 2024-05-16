#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

/*2 �������: ������ (����: ��� �������, ����, ��������� ������. ������: �����
������/���������� ������, ���������� �����)*/

class tree{
private:
	string name;
	int year;
	double height;
	string status;
	bool leaves;
public:

	tree(string name1, int planted, double  height1, string status1) :name(name1), year(planted), height(height1), status(status1){}

	void noleaves() {
		setlocale(LC_ALL, "ru");
		if (!leaves) {
			cout << "� ������ ���������� ������. ������ ����� ��������� � ������� ����.����." << endl;
		}
		else {
			leaves = false;
			cout << "������ � ������ �����." << endl;
		}
	}

	void growleaves() {
		setlocale(LC_ALL, "ru");
		if (!leaves) {
			leaves = true;
			cout << "������ �������� � ��������� �����." << endl;
		}
		else {
			cout << "������ ��� �������." << endl;
		}
	}

	void incheight(double grow) {
		setlocale(LC_ALL, "ru");
		if (grow > 0) {
			height += grow;
			cout << "������ ������� ��: " << grow << " ������. ������ ������ �� ������ ������ ����������: " << height << endl; 
		}
		else if (grow == 0){
			cout << "���� ������ ������� �������" << endl;
		}
		else {
			cout << "������������� ��������� ������." << endl;
		}
	}

	void info() {
		setlocale(LC_ALL, "ru");
		cout << "�������� ������: " << name << endl;
		cout << "��� ������� ������: " << year << endl;
		cout << "������: " << height << endl;
	}

};

/*2 �������: ������� ��� � ���������� ��� ������������� ��������� ���������� �
��������� ������: ���, ���, ��� ��������, ������� ����� �� ������ ��������
� �����, ��������� � ��������� (��/���). ����������� � ������� ��������,
������������ ������ ���������, ������� ����� ������������ �� ���������.*/

struct student {
	string firtsname;
	string secondname;
	string middlename;
	string gender;
	string hbd;
	double finance;
	bool requirement;

	void given() {
		setlocale(LC_ALL, "ru");
		if ((requirement) && (finance>50000)) {
			cout << "�������� ����� ������ ����� � ���������." << endl;
		}
		else {
			requirement = false;
			cout << "�������� �� �������� ����� � ���������." << endl;
		}
	}
};

int main() {
	setlocale(LC_ALL, "ru");
	cout << "1 �������: " << endl;
	tree chipi("���", 2005, 40.1, "����������");
	chipi.info();
	chipi.noleaves();
	chipi.growleaves();
	chipi.incheight(0.5);


	cout << endl << "2 �������: " << endl;

	student first;
	first.firtsname = "������";
	first.secondname = "��������";
	first.middlename = "���������";
	first.gender = "�������";
	first.hbd = "01.12.2005";
	first.finance = 75654;

	cout << "��� ��������: " << first.firtsname << endl;
	cout << "������� ��������: " << first.secondname << endl;
	cout << "�������� ��������: " << first.middlename << endl;
	cout << "���: " << first.gender << endl;
	cout << "���� ��������: " << first.hbd << endl;
	cout << "������� ����� �����: " << first.finance << endl;

	first.given();

}