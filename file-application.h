#ifndef TASK4_FILE_APPLICATION_H
#define TASK4_FILE_APPLICATION_H

#include <iostream>
#include <string>
#include <fstream>
#include "data-structure.h"

struct FileApplication {
	struct FileRecord {
		struct T {
			int hour = 0;
			int minute = 0;
		};

		typedef long Key;
		Key trail_number = 0;
		std::string departure_point = "A";
		std::string destination_point = "B";
		T time;
		FileRecord();
		FileRecord(Key trail_number, std::string departure_point, std::string destination_point, int hour, int minute);
	};
	typedef long Key;

private:
	std::string filename;
	std::fstream file;
	Data_structure<Key, long>* const DS;
public:
	FileApplication(const std::string&, Data_structure<Key, long>* const); //êîíñòðóêòîð, ïðî÷èòûâàåò ôàéë è çàïîëíÿåò äåðåâî

	bool insert(const FileRecord&); //äîáàâèòü çàïèñü â ôàéë (0 - óäà÷íî, -1 - çàïèñü ñ òàêèì êëþ÷åì óæå åñòü â ôàéëå)

	bool erase(const long&); //óäàëèòü çàïèñü èç ôàéëà

	FileRecord get(const Key&); //âîçâðàùàåò çàïèñü ïî êëþ÷ó

	FileRecord read(const long&); //âîçðàùàåò çàïèñü ïî ïîçèöèè â ôàéëå

	void print(); //ïå÷àòàåò ñòðóêòóðó äàííûõ, èñïîëüçóåìóþ äëÿ ôàéëà

	~FileApplication();
};

std::ostream& operator<<(std::ostream&, const FileApplication::FileRecord&); //îïåðàòîð âûâîäà çàïèñè, â ñòàíäàðòíûé ïîòîê âûâîäà

std::fstream& operator<<(std::fstream&, const FileApplication::FileRecord&); //îïåðàòîð âûâîäà çàïèñè, â ôàéë

FileApplication::FileRecord strToRecord(const std::string&); //ïðåîáðàçóåò ñòðîêó â çàïèñü

#endif
