#include "haiku.h"
#include <iostream>

Haiku::Haiku(const std::string& line1, const std::string& line2, 
      std::string& line3, const std::string& name, const std::string& writer) 
  : author(writer), title(name) 
{
  lines[0] = line1;
  lines[1] = line2;
  lines[2] = line3;
}

std::string Haiku::operator[](int linenum) const { 
  return lines[linenum];
}

int Haiku::getLineCount() {
  return 3;
}

std::string Haiku::getTitle() const { 
  return title;
}

std::string Haiku::getAuthor() const { 
  return author;
}

