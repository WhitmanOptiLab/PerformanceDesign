#include "poem.h"
#include <iostream>


Poem::Poem(const std::vector<std::string>& text, const std::string& title,
    const std::string& author) :
  text(text), author(author), title(title)
{ }

std::string Poem::operator[](int linenum) const { 
  return text[linenum];
}

std::string Poem::getTitle() const { 
  return title;
}

int Poem::getLineCount() const {
  return text.size();
}

std::string Poem::getAuthor() const { 
  return author;
}
