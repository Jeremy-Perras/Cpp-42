#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main(int argc, char **argv)
{
  char c;
  int flag = 1;
  size_t found = 0;
  if(argc < 4 || std::strlen(argv[1]) == 0)
  {
    std::cout << "Invalid parameters" << std::endl;
   return(1);
 }
 std::string name = argv[1];
 std::string s1 = argv[2];
 std::string s2 = argv[3];
 std::string str;
 name.append(".replace");
 std::ifstream inputFile;
 std::ofstream outputFile;
 inputFile.open(argv[1]);
 if(inputFile.fail() || outputFile.fail())
 {
   std::cerr << "Fail open file";
   return(1);
 }
 outputFile.open(name, std::ofstream::out);
 if(outputFile.fail())
 {
   std::cerr << "Fail open file";
   return(1);
 }
 std::stringstream strings;
 strings << inputFile.rdbuf();
 str = strings.str();
 while(flag)
{
  found = str.find(s1, found);
  if(found == std::string::npos)
   flag = 0;
  else
  {
    str.erase(found, s1.length());
    str.insert(found, s2);
    found += s2.length();
  }
}
  outputFile << str;
  inputFile.close();
  outputFile.close();
  return(0);
}
