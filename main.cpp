#include <iostream>
#include <map>

using namespace std;

int main() {

    map<string, string> it_map;

    it_map.insert(pair<string, string>("Ada", "Ada Lovelace"));
    it_map.insert(pair<string, string>("Turing Machine", "Alan Turing"));
    it_map.insert(pair<string, string>("Lisp", "John McCarthy"));
    it_map.insert(pair<string, string>("C++", "Bjarne Stroustrup"));
    it_map.insert(pair<string, string>("GNU project", "Richard Stallman"));
    it_map.insert(pair<string, string>("Linux", "Linus Torvalds"));

    for (auto const &ent : it_map) {
        std::cout << "Found " << ent.first << " created by " << ent.second << '\n';
    }

    auto search = it_map.find("C++");
    if(search != it_map.end()) {
        std::cout << "Found " << search->first << " created by " << search->second << '\n';
    }
    else {
        std::cout << "Not found\n";
    }
    return 0;
}