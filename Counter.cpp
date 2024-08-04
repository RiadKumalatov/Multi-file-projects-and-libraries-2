#include "Counter.h"

Counter::Counter(int initialValue) : value(initialValue) {}

void Counter::increment() {
    ++value;
}

void Counter::decrement() {
    --value;
}

int Counter::getCurrentValue() const {
    return value;
}
