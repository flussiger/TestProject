#include <iostream>
#include "Weather.h"
#include "Storm.h"

int main() {
    Weather w("Wien", 23.5);
    Weather h("Orenburg", 5.5);
    Storm s("Hurricane", 150.0, "North");
    Storm t("Tornado", 120.0, "East");
    w.print();
    h.print();
    s.print();
    t.print();
    return 0;
}