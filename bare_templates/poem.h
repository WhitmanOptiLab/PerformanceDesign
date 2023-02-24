#include <string>
#include <vector>

class Poem {
 private:
  //Things to store: fields/member variables
  //Text of the poem itself: string: array of strings representing lines? Stanzas?
  std::vector<std::string> text;
  //Author: string
  std::string author;
  //Title: string
  std::string title;

 public:
  Poem(const std::vector<std::string>& the_text, 
       const std::string& name,
       const std::string& writer = "Anonymous");
  //getters/accessors
  std::string operator[](int linenum) const;
  std::string getAuthor() const;
  std::string getTitle() const;
  int getLineCount() const;
  //Has a known author?
  bool hasAuthor() const;
};

