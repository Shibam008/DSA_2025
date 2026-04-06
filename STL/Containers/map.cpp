#include <iostream>
#include <map> //! inser -> t.c -> O(log n) && stores sorted values
#include <unordered_map> //! t.c -> O(1)
using namespace std;

int main() {

    //* All the keys are unique. No duplicate keys allowed.
    
    unordered_map<string, string> table;

    // insertions techniques -

    table["in"] = "India";
    table.insert(make_pair("en", "England"));
    table.insert(make_pair("br", "Brazil"));

    cout << table.size() << endl;

    cout << table.at("en") << endl;

    // update value -

    table["in"] = "India1";
    cout << table.at("in") << endl;

    // travarsing on map

    unordered_map<string,string>::iterator it = table.begin();

    while(it != table.end()) {
        pair<string,string> p = *it;
        cout << p.first << " - " << p.second << endl;
        it++;
    }

    //& find()-
    // if we find the key it return that iterator
    // else it returns table.end()

    if(table.find("br") != table.end()) {
        cout << "Key found" << endl;
    } else {
        cout << "key not found\n";
    }

    //& count() - returns the number of elements with the specified key(0 or 1 since map doesn't allow duplicate keys)
    if(table.count("bl") != 0) {
        cout << "Key found" << endl;
    } else {
        cout << "key not found\n";
    }



    map<int,string> mp;

    mp.insert(make_pair(3, "Shibam"));
    mp.insert(make_pair(1, "Shovan"));
    mp.insert(make_pair(4, "Anik"));
    mp.insert(make_pair(2, "Subho"));

    map<int,string>::iterator it2 = mp.begin();

    while(it2 != mp.end())
    {
        pair<int,string> p = *it2;
        cout << p.first << " -> " << p.second << endl;
        it2++;
    }
    return 0;
}