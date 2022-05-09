

#include <iostream>

int main(int argc, char **argv)
{
  int i;
  int j;

  i = 1;
  if(argc < 2)
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
  else
  {
    while(argv[i])
    {
      j = 0;
      while(argv[i][j])
      {
        if(argv[i][j] >= 97  && argv[i][j] <= 122)
          argv[i][j] = argv[i][j] - 32;
        std::cout << argv[i][j];
        j++;
      }
      i++;
    }
  }
  std::cout << std::endl;
  return 0;
}
