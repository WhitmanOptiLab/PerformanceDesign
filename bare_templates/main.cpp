
#include <string>
#include <iostream>
#include <vector>
#include "poem.h"
#include "haiku.h"

using namespace std;

template<class T>
void printPoem(T& p) {
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




