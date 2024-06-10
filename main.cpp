#include <iostream>

int readNumber(){
  int num{};
  std::cout<<"Enter two numbers: ";
  std::cin >> num;
  return num;
}

void writeAnswer(int num){
  std::cout<<num;
}

int main(){
  int sum{readNumber()+readNumber()};
  writeAnswer(sum);

  return 0;
}
