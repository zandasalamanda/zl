/*
   name: zander
   date: 1/30/2025
   program: famous soccer players vector
   extra: reverses the list at the end
*/

#include <iostream>
#include <vector>

int main() {
    // initialize vector with famous soccer players
    std::vector<std::string> players = {"Pelé", "Ronaldinho", "Messi", "Ronaldo", "Zidane", "Beckham"};
    
    std::cout << "Original List:\n";
    for (auto it = players.begin(); it != players.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\n\n";
    
    // insert "cruyff" between "ronaldinho" and "messi"
    players.insert(players.begin() + 2, "Cruyff");
    
    players.erase(players.begin() + 5);
    
    std::cout << "After Insert and Erase:\n";
    for (auto it = players.begin(); it != players.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\n\n";
    
    // reverse the vector
    std::cout << "Final List in Reverse Order:\n";
    for (auto it = players.rbegin(); it != players.rend(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\n";
    
    return 0;
}
