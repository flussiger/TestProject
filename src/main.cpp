#include <iostream>
#include "Weather.h"
#include "Storm.h"
#include <sqlite3.h>

int main() {
    sqlite3* db;
    if (sqlite3_open("weather.db", &db)) {
        std::cerr << "Can't open database: " << sqlite3_errmsg(db) << std::endl;
        return 1;
    }

    const char* create_table =
        "CREATE TABLE IF NOT EXISTS storms (name TEXT, speed REAL, direction TEXT);";
    if (sqlite3_exec(db, create_table, 0, 0, 0) != SQLITE_OK) {
        std::cerr << "Table creation failed\n";
    }

    Storm s("CycloneSKIBIDITOILETTTTTE", 69420.0, "THreaest");
    std::string sql = "INSERT INTO storms (name, speed, direction) VALUES ('" +
        s.getName() + "', " + std::to_string(s.getSpeed()) + ", '" + s.getDirection() + "');";
    sqlite3_exec(db, sql.c_str(), 0, 0, 0);

    Weather w("Vienna", 23.5);
    w.print();
    s.print();

    sqlite3_close(db);
    return 0;
}