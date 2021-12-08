#ifndef TASK4_BINARY_TREE_H
#define TASK4_BINARY_TREE_H

#include "data-structure.h"
#include <functional>

template<typename Key, typename Info, typename C = std::less<Key>>
class BinaryTree : public Data_structure<Key, Info, C> {
	struct Node;

	Node* T; //îãðàíè÷èòåëü

	struct Node {
		Key k;
		Info data;
		Node* parent;
		Node* left;
		Node* right;

		Node();

		Node(Key, Info, Node*, Node*, Node*);
	};

	Node* root;

	C cmp;

	void print(Node*, int h = 0) const;

public:

	BinaryTree();

	Info* find(const Key&) const; //íàõîäèò ýëåìåíò â äåðåâå, âîçâðàùàåò åãî ïîçèöèþ â ôàéëå èëè -1, åñëè ýë. íå íàéäåí

	bool insert(const Key&, const Info&); //äîáàâëÿåò ýëåìåíò â äåðåâî

	bool erase(const Key&); //óäàëÿåò ýëåìåíò

	void print() const; //ïå÷àòàåò äåðåâî (êëþ÷è)

	~BinaryTree();
};



#endif //TASK4_BINARY_TREE_H
