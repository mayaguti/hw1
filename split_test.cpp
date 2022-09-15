#include "split.h"

int main(){
	Node* list1 = nullptr;
	Node* even1 = nullptr;
	Node* odd1 = nullptr;
	split(list1, even1, odd1);

	Node* list2 = nullptr;
	Node* even2 = nullptr;
	Node* odd2 = nullptr;
	split(list2, even2, odd2);

	return 0;
}