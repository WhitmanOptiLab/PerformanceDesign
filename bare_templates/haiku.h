#include <string>

class Haiku {
 private:
  //Text of the poem itself: string: array of strings representing lines? Stanzas?
  std::string lines[3];
  //Author: string
  std::string author;
  //Title: string
  std::string title;

 public:
  Haiku(const std::string& line1, const std::string& line2, 
      std::string& line3, const std::string& name,
       const std::string& writer = "Anonymous");
  //getters/accessors
  int getLineCount();
  std::string operator[](int linenum) const;
  std::string getAuthor() const;
  std::string getTitle() const;
  //Has a known author?
  bool hasAuthor() const;
};

