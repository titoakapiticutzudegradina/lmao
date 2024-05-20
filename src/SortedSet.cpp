#include "../include/SortedSet.h"
#include "../include/SortedSetIterator.h"

SortedSet::SortedSet(Relation r) {
	//TODO - Implementation
	this->relation = r;
	this->capacity = 10;
	this->head = -1;
	this->tail = -1;
	this->elements = new TComp[this->capacity];
	this->next = new int[this->capacity];
	this->prev = new int[this->capacity];
	this->firstEmpty = 0;
	for (int i = 0; i < this->capacity - 1; i++) {
		this->next[i] = i + 1;
		this->prev[i] = i - 1;
	}
	this->next[this->capacity - 1] = -1;
	this->prev[0] = -1;
	this->prev[this->capacity - 1] = this->capacity - 2;
}


bool SortedSet::add(TComp elem) {
	//TODO - Implementation
	//check if the set is full:
	
}


bool SortedSet::remove(TComp elem) {
	//TODO - Implementation
	return false;
}


bool SortedSet::search(TComp elem) const {
	//TODO - Implementation
	return true;
}


int SortedSet::size() const {
	//TODO - Implementation
	return 0;
}



bool SortedSet::isEmpty() const {
	//TODO - Implementation
	return false;
}

SortedSetIterator SortedSet::iterator() const {
	return SortedSetIterator(*this);
}


SortedSet::~SortedSet() {
	//TODO - Implementation
}


