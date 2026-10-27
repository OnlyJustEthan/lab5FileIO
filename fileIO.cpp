#include <cstdlib>
#include <iostream>
#include <sstream>
#include <fstream>

//Prototypes
void printWords(int num1, int num2, std::string word);
std::stringstream ss;
std::stringstream converter;
std::string row;
std::string holder;
int num1;
int num2;
std::string word;

int main(){
  std::ifstream data;
  data.open("data.csv");
  while(std::getline(data,row)){
    ss.clear();ss.str("");converter.clear();converter.str(""); //clear
    ss << row;
    //std::cout << ss.str() << std::endl; //test print
    //Pull num1
    std::getline(ss,holder,',');
    converter << holder;
    converter >> num1;
    converter.clear();converter.str(""); //clear converter
    //Pull num2
    std::getline(ss,holder,',');
    converter << holder;
    converter >> num2;
    converter.clear();converter.str(""); //clear converter
    //Pull word
    std::getline(ss,word,',');
    ss.clear();ss.str("");//clear stringstream
    //std::cout << num1 << num2 << " " << word << " " << std::endl; //test print
    printWords(num1, num2, word);
    std::cout << std::endl;
  }//end while
  data.close();
  return(0);
}//end main

void printWords(int num1, int num2, std::string word){
  int sum = num1 + num2;
  //std::cout << "Repeat count: " << sum << std::endl;//test
  for(int i;i < sum;i++){
    std::cout << word;
  }//end for
}//end printwords
