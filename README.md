# lab5FileIO Algorithm

## Includes:
```
cstdlib
iostream
sstream
fstream
```

## Prototypes
```
void printWords(int num1, int num2, string word);
stringstream ss;
stringstream converter;
string row;
string holder;
int num1;
int num2;
string word;
```

## Functions
```
main{
    Open the data file.
    For each line in the file, if not blank:
        Clear buffers.
        Extract the line.
        Read the first number and assign to a variable.
        Read the second number and assign to a variable.
        Read the word and assign to a variable.
        printWords(num1, num2, word)
}
    
printWords(int num1, int num2, string word){
    int sum
    Add the numbers together.
    For the addition result:
        Print the word that many times.
    Print a newline.
}
```
