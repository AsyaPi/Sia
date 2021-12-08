#include "data-structure.h"
#include "file-application.h"
#include "hash-table.h"
#include "binary-tree.h"
#include "1_Tree.h"
#include <iostream>
#import "binary-tree.cpp"
#import "1_Tree.cpp"

using namespace std;

int main() {
    1_Tree<long, long> *Tree = new 1_Tree<long,long>;
	FileApplication F("test1.txt",Tree);
	F.print();
	cout << F.get(1337) << '\n'; //получение записи по номеру поезда
	F.erase(1337); //удаление записи
	cout << F.get(1337) << '\n';
	FileApplication::FileRecord r = strToRecord("1337|Россия|Украина|15:25");
	F.insert(r);
	cout << F.get(1337) << '\n';
    cout << "Среднее количество поворотов: " << Tree->get_average_rotations();
	return 0;
}
