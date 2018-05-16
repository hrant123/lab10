#include "pr.h"

float func(unsigned val,float price) {
	static int cnt = 0;
	static float s = 0;
	if (val > 10000) {
		s += price;
		cnt++;
	}
	if (cnt>0)
		return s/cnt;
	else return 0;
}