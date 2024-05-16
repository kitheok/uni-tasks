#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

/*2 вариант: Дерево (Поля: год посадки, рост, состояние листвы. Методы: сброс
листвы/отрастание листвы, увеличение роста)*/

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
			cout << "У дерева отсутсвуют листья. Листья будут отрастать в течение след.года." << endl;
		}
		else {
			leaves = false;
			cout << "Листва с дерева спала." << endl;
		}
	}

	void growleaves() {
		setlocale(LC_ALL, "ru");
		if (!leaves) {
			leaves = true;
			cout << "Листва вырастет в ближайшее время." << endl;
		}
		else {
			cout << "Листья уже отрасли." << endl;
		}
	}

	void incheight(double grow) {
		setlocale(LC_ALL, "ru");
		if (grow > 0) {
			height += grow;
			cout << "Дерево выросло на: " << grow << " метров. Высота дерева на данный момент составляет: " << height << endl; 
		}
		else if (grow == 0){
			cout << "Рост дерева остался прежним" << endl;
		}
		else {
			cout << "Перепроверьте введенные данные." << endl;
		}
	}

	void info() {
		setlocale(LC_ALL, "ru");
		cout << "Название дерева: " << name << endl;
		cout << "Год посадки дерева: " << year << endl;
		cout << "Высота: " << height << endl;
	}

};

/*2 вариант: Описать тип и переменные для представления структуры информация о
студентах группы: ФИО, пол, год рождения, средний доход на одного человека
в семье, нуждается в общежитии (да/нет). Разработать и описать алгоритм,
определяющий список студентов, которые могут рассчитывать на общежитие.*/

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
			cout << "Студенту можно выдать место в общежитии." << endl;
		}
		else {
			requirement = false;
			cout << "Студенту не выдается место в общежитии." << endl;
		}
	}
};

int main() {
	setlocale(LC_ALL, "ru");
	cout << "1 задание: " << endl;
	tree chipi("Клён", 2005, 40.1, "Нормальное");
	chipi.info();
	chipi.noleaves();
	chipi.growleaves();
	chipi.incheight(0.5);


	cout << endl << "2 задание: " << endl;

	student first;
	first.firtsname = "Карина";
	first.secondname = "Пелевина";
	first.middlename = "Денисовна";
	first.gender = "Женский";
	first.hbd = "01.12.2005";
	first.finance = 75654;

	cout << "Имя студента: " << first.firtsname << endl;
	cout << "Фамилия студента: " << first.secondname << endl;
	cout << "Отчество студента: " << first.middlename << endl;
	cout << "Пол: " << first.gender << endl;
	cout << "День рождения: " << first.hbd << endl;
	cout << "Средний доход семьи: " << first.finance << endl;

	first.given();

}