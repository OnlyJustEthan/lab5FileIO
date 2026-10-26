# lab5FileIO Algorithm

## Includes:
cstdlib
iostream

## Prototypes
```
void printWords(int num1, int num2, string word);
```

## Functions
```
main{
    Open the data file.
    For each line in the file, if not blank:
        Extract the line.
        Read the first number and assign to a variable.
        Read the second number and assign to a variable.
        Read the word and assign to a variable.
        printWords(num1, num2, word)
}
    
printWords(int num1, int num2, string word){
    Multiply the numbers together.
    For the number of times of the multiplication result:
        Print the word that many times.
    Print a newline.
}
```
