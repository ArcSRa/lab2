#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <map>
#include <sstream>
using namespace std;
using std::string;
using std::vector;
using std::map;



struct Player{


vector<string> name_;
string last_name_;
double score_;
Player(const string &line) { ... }

~Player() =default;

};


int main (int argc, char *argv[]) {


  //Ouverture du fichier 
  string file_name{argv[1]};
  std::ifstream fin(file_name, std::ios::in);
  string file_name_out ; // nom du fichier d'écriture
  vector<Player> players;
  players.reserve(100);
  ofstream fout (file_name_out, std::ios::out) ; 
 string line;
while(getline(fin, line))
{ 
  players.emplace_back(line);
}

int idx=0;
print_table_header();
for(auto &player:players) {
    player.print_table_entry(++idx);
}

print_table_footer();
}