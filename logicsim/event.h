#ifndef EVENT_H
#define EVENT_H
#include "wire.h"

struct Event
{
    uint64_t time;
    Wire* wire;
    char state;
};

typedef struct EventLess {

bool operator()(Event* ev1, Event* ev2) {
	if (ev1->time < ev2->time) {
		return true;
	} else {
		return false;
	}
}
        //write the operator() required to make this a functor that compares Events by time
} EventLess;
	
#endif
