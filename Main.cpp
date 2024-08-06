// this library includes iostream wich provides basic commands to the code.
#include <iostream>

// this function sums two paramerts previously given.
int addNuumbers ( int first_param, int second_param){
    int result = first_param + second_param;
    return result;
}

int main(   ){

    //Declaration of static variables
    int firstNumber {3}; //First statement
    int secondNumber{7}; //Second statement
    int result = firstNumber + secondNumber; // adds the result and sums the first and second statement
    int sum = addNuumbers(firstNumber,secondNumber);//calls function addNumbers
    

    //this process prints the result of the sum of the firstNumber and secondNumber variables.
    std:: cout << " The sum of the number "<< firstNumber << " + " << secondNumber << " is: "
    << sum << std :: endl;


}
