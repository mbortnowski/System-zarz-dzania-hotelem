#include "stdafx.h"
#include "Pokoj.h"

int Pokoj::current_id = 0;


Pokoj::Pokoj() {
	ID = current_id++;


}
Pokoj::Pokoj(int N, int P, string O, bool S) {
	ID = current_id++;


}