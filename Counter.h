#ifndef COUNTER_H
#define COUNTER_H

class Counter {
private:
    int value;

public:
    Counter(int initialValue = 1);

    void increment();
    void decrement();
    int getCurrentValue() const;
};

#endif // COUNTER_H
#pragma once
