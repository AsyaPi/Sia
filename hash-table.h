#ifndef TASK4_HASH_TABLE_H
#define TASK4_HASH_TABLE_H
#include "data-structure.h"

template<typename Info>
class HashTable : public Data_structure<long, Info> {
	struct Record {
		long key;
		Info data;
		bool free; //ôëàã "ñâîáîäíà ëè ÿ÷åéêà?"
		bool del; //ôëàã "áûëà ëè óäàëåíà ÿ÷åéêà?"

		Record();
	};
	long capacity;
	long size;
	Record* table;

	long h1(const long&) const; //õåø-ôóíêöèÿ, ïðåîáðàçóþùàÿ çíà÷åíèå êëþ÷à â èíäåêñ òàáëèöû

	long h2(const long&) const; //õåø-ôóêöèÿ, ðàñ÷èòûâàþùàÿ ñìåùåíèå ïðè êîëëèçèè

	void rehash(); //ô-öèÿ, ðåõåøèðîâàíèÿ òàáëèöû, ðàçìåð òàáëèöû óâåëè÷èâàåòñÿ â 2 ðàçà

public:
	HashTable();

	Info* find(const long&) const;

	bool insert(const long&, const Info&);

	bool erase(const long&);

	void print() const;

	~HashTable();
};

#endif
