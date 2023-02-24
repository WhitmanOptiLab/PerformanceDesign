#ifndef CS270POEM_H
#define CS270POEM_H

#include "poembase.h"

#include <vector>

class Poem : public PoemBase {
 private:
   std::vector<std::string> lines;

 public:
   Poem (std::vector<std::string> text, std::string auth, std::string t);
   void appendLine(std::string line);
   void removeLine(int linenum);
   //virtual void print(); Or just use the version from the superclass
   virtual int getLineCount() final;
   virtual std::string operator[](int linenum) final { return lines[linenum]; }

};
#endif
