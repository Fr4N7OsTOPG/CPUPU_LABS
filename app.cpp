#include "app.h"
int App::start() {
    int x = 4;
    double y = 1.6;
    print(swap(x, 3));
    print(swap(y, 3));
    Stack s(2);
    s.push(4);
    s.push(12);
    s.pop();
    s.pop();
    s.pop();
    return 0;
}
