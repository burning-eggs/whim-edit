#ifndef WHIMEDIT_SOMECLASS_H
#define WHIMEDIT_SOMECLASS_H

class SomeClass {
public:
    SomeClass(int value);

public:
    int Value(void) const { return value_; }

private:
    int value_;
};

#endif //WHIMEDIT_SOMECLASS_H
