#ifndef CS270HAIKU_H
#define CS270HAIKU_H

#include "poembase.h"

#include <iostream>

class Haiku : public PoemBase {
 private:
  std::string lines[3];

 public:
  virtual int getLineCount() { return 3; }
  virtual std::string operator[](int linenum) { return lines[linenum]; }
 
  Haiku(std::string line0,
      std::string line1,
      std::string line2,
      std::string a,
      std::string t)  
  {
    title = t;
    author = a;
    lines[0] = line0;
    lines[1] = line1;
    lines[2] = line2;
  };

};

#endif 


