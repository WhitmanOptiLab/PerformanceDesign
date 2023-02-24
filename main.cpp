
#include <string>
#include <iostream>
#include <vector>
#include "poem.h"
#include "haiku.h"

using namespace std;

//Requirements: 
// * printPoem must work for both uses shown in main
// * the execution of printPoem must *always* avoid indirect function overhead
// * The design of the classes Poem and Haiku, as well as the printPoem 
//    function, must adhere to good software design principles. In 
//    particular, there should be no strictly-duplicated fields or method 
//    implementations. You may modify the declaration of printPoem as needed, 
//    so long as it continues to work with the uses in main.

void printPoem(PoemBase& p) {
  std::cout << p.getTitle() << std::endl;
  std::cout << "A Poem by " << p.getAuthor() << std::endl << std::endl;
  for (int i = 0; i < p.getLineCount(); i++) {
    std::cout << p[i] << std::endl;
  }
}

int main() {
  vector<string> apoem; 
  apoem.push_back("References, Templates");
  apoem.push_back("Who invented this language?");
  apoem.push_back("And were they evil?");
  string author = "Someone";
  string title = "C++";

  Poem p(apoem, author, title);
  Haiku h(apoem[0], apoem[1], apoem[2], author, title);

  printPoem(p);
  printPoem(h);
}




