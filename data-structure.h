#ifndef TASK4_DATA_STRUCTURE_H
#define TASK4_DATA_STRUCTURE_H

#include <functional>

template<typename Key, typename Info, typename C = std::less<Key>>
class Data_structure {
protected:
	Data_structure() {}

public:
	virtual Info* find(const Key&) const { return nullptr; }//íàõîäèò ýëåìåíò, âîçâðàùàåò óêàçàòåëü íà åãî èíôîðìàöèîííóþ ÷àñòü èëè nullptr

	virtual bool insert(const Key&, const Info&) { return false; }//äîáàâëÿåò ýëåìåíò

	virtual bool erase(const Key&) { return false; }//óäàëÿåò ýëåìåíò

	virtual void print() const {}//îòîáðàæåíèå áàçû äàííûõ

	virtual ~Data_structure() {}
};

#endif //TASK4_DATA_STRUCTURE_H
