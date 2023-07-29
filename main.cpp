/******************************************************
 * Course:     CSC510 DISCRETE STRUCTURE                *
 *                                                      *
 * Selected theory:                                     *
 * Propositional Logic                                  *
 *                                                      *
 * Title:                                               *
 * Propositional Logic Assistant                        *
 ******************************************************/

#include <iostream>
using namespace std;

// A class that encapsulates logic operations
class LogicOperations
{
private:
    bool p, q; // Private variables for logic values

public:
    // Constructor that initializes p and q with the provided values
    LogicOperations(bool p, bool q)
    {
        this->p = p;
        this->q = q;
    }

    // Negation (¬p) reverses the Boolean value of p.
    bool Negation()
    {
        return !p; // Reverses the value of p
    }

    // Conjunction (p ∧ q) is true if both p and q are true.
    bool Conjunction()
    {
        return p && q; // Returns true if p and q are both true
    }

    // Disjunction (p ∨ q) is true if either p or q, or both are true.
    bool Disjunction()
    {
        return p || q; // Returns true if at least one of p or q is true
    }

    // Implication (p → q) is true except when p is true and q is false.
    bool Implication()
    {
        return !p || q; // Returns true except in the case where p is true and q is false
    }

    // Biconditional (p ↔ q) is true if p and q have the same value.
    bool Biconditional()
    {
        return (p && q) || (!p && !q); // Returns true if p and q have the same value
    }

    // Function to print the truth table for the chosen operation
    void printTruthTable(char op)
    {
        switch (op)
        {
        case '!':
            // Truth table for ¬p
            cout << "Truth Table for NEGATION operation (NOT P)" << endl;
            cout << "+---+-------+" << endl;
            cout << "| p | NOT p |" << endl;
            cout << "+---+-------+" << endl;
            cout << "| 0 |   1   |" << endl;
            cout << "| 1 |   0   |" << endl;
            cout << "+---+-------+" << endl;
            break;

        case '&':
            // Truth table for p ∧ q
            cout << "Truth Table for CONJUNCTION operation (p AND q)" << endl;
            cout << "+---+---+---------+" << endl;
            cout << "| p | q | p AND q |" << endl;
            cout << "+---+---+---------+" << endl;
            cout << "| 0 | 0 |    0    |" << endl;
            cout << "| 0 | 1 |    0    |" << endl;
            cout << "| 1 | 0 |    0    |" << endl;
            cout << "| 1 | 1 |    1    |" << endl;
            cout << "+---+---+---------+" << endl;
            break;

        case '|':
            // Truth table for p ∨ q
            cout << "Truth Table for DISJUNCTION operation (p OR q)" << endl;
            cout << "+---+---+--------+" << endl;
            cout << "| p | q | p OR q |" << endl;
            cout << "+---+---+--------+" << endl;
            cout << "| 0 | 0 |    0   |" << endl;
            cout << "| 0 | 1 |    1   |" << endl;
            cout << "| 1 | 0 |    1   |" << endl;
            cout << "| 1 | 1 |    1   |" << endl;
            cout << "+---+---+--------+" << endl;
            break;

        case '>':
            // Truth table for p → q
            cout << "Truth Table for IMPLICATION operation (p IMPLIES q)" << endl;
            cout << "+---+---+-------------+" << endl;
            cout << "| p | q | p IMPLIES q |" << endl;
            cout << "+---+---+-------------+" << endl;
            cout << "| 0 | 0 |      1      |" << endl;
            cout << "| 0 | 1 |      1      |" << endl;
            cout << "| 1 | 0 |      0      |" << endl;
            cout << "| 1 | 1 |      1      |" << endl;
            cout << "+---+---+-------------+" << endl;
            break;

        case '=':
            // Truth table for p ↔ q
            cout << "Truth Table for BICONDITIONAL operation (p IFF q)" << endl;
            cout << "+---+---+---------+" << endl;
            cout << "| p | q | p IFF q |" << endl;
            cout << "+---+---+---------+" << endl;
            cout << "| 0 | 0 |    1    |" << endl;
            cout << "| 0 | 1 |    0    |" << endl;
            cout << "| 1 | 0 |    0    |" << endl;
            cout << "| 1 | 1 |    1    |" << endl;
            cout << "+---+---+---------+" << endl;
            break;

        default:
            cout << "Error. Invalid operator!\n";
            break;
        }
    }
};

// Function that asks the user questions to test their understanding of logic operations
void askUserQuestions()
{
    int answer;     // To store the correct answer for comparison
    int userAnswer; // To store the user's answer

    cout << "\n***** INTERACTIVE MODE *****\n";
    cout << "Let's test your propositional logic skills with some problems.\n";

    // First question asks about the operation NOT (P AND Q)
    cout << "\nQuestion 1: What is the result of the operation NOT (P AND Q) if P is true and Q is false? (Enter 1 for true, 0 for false)\n";
    LogicOperations logic1(true, false); // Initializing LogicOperations object with P=true and Q=false
    answer = !logic1.Conjunction();      // Performing NOT (P AND Q)
    cin >> userAnswer;
    if (userAnswer == answer)
    {
        cout << "Correct! Great job.\n";
    }
    else
    {
        cout << "Incorrect. The correct answer is " << answer << ".\n";
    }

    // Second question asks about the operation (P OR Q)
    cout << "\nQuestion 2: What is the result of the operation (P OR Q) if P is false and Q is false? (Enter 1 for true, 0 for false)\n";
    LogicOperations logic2(false, false); // Initializing LogicOperations object with P=false and Q=false
    answer = logic2.Disjunction();        // Performing (P OR Q)
    cin >> userAnswer;
    if (userAnswer == answer) // If user's answer matches the correct answer
    {
        cout << "Correct! Great job.\n";
    }
    else
    {
        cout << "Incorrect. The correct answer is " << answer << ".\n";
    }

    // Third question asks about the operation (P → Q)
    cout << "\nQuestion 3: What is the result of the operation (P → Q) if P is true and Q is false? (Enter 1 for true, 0 for false)\n";
    LogicOperations logic3(true, false); // Initializing LogicOperations object with P=true and Q=false
    answer = logic3.Implication();       // Performing (P → Q)
    cin >> userAnswer;
    if (userAnswer == answer) // If user's answer matches the correct answer
    {
        cout << "Correct! Great job.\n";
    }
    else
    {
        cout << "Incorrect. The correct answer is " << answer << ".\n";
    }

    // Fourth question asks about the operation (P ↔ Q)
    cout << "\nQuestion 4: What is the result of the operation (P ↔ Q) if P is true and Q is false? (Enter 1 for true, 0 for false)\n";
    LogicOperations logic4(true, false); // Initializing LogicOperations object with P=true and Q=false
    answer = logic4.Biconditional();     // Performing (P ↔ Q)
    cin >> userAnswer;
    if (userAnswer == answer) // If user's answer matches the correct answer
    {
        cout << "Correct! Great job.\n";
    }
    else
    {
        cout << "Incorrect. The correct answer is " << answer << ".\n";
    }

    // Fifth question asks about the operation (P → Q)
    cout << "\nQuestion 5: What is the result of the operation (P → Q) if P is false and Q is false? (Enter 1 for true, 0 for false)\n";
    LogicOperations logic5(false, false); // Initializing LogicOperations object with P=false and Q=false
    answer = logic5.Implication();        // Performing (P → Q)
    cin >> userAnswer;
    if (userAnswer == answer) // If user's answer matches the correct answer
    {
        cout << "Correct! Great job.\n";
    }
    else
    {
        cout << "Incorrect. The correct answer is " << answer << ".\n";
    }
}

// Function that serves as a logic calculator, asking the user for input and displaying the results
void calculatorMode()
{
    char op;       // To store the operator entered by the user
    bool p, q;     // To store the truth values entered by the user
    char exitLoop; // To control whether to continue the loop or not

    do
    {
        // Asking the user for the operator
        cout << "\nPlease select the logical operator you'd like to use:\n"
             << "'!' for NEGATION (NOT)\n"
             << "'&' for CONJUNCTION (AND)\n"
             << "'|' for DISJUNCTION (OR)\n"
             << "'>' for IMPLICATION (IMPLIES)\n"
             << "'=' for BICONDITIONAL (IF AND ONLY IF)\n"
             << "Enter Operator: ";
        cin >> op;

        // Error checking for operator
        if (op != '!' && op != '&' && op != '|' && op != '>' && op != '=')
        {
            cout << "\nError: The operator you entered is not recognized! Please try again with a valid operator.\n";
            continue;
        }

        // If operator is NOT, only one truth value is needed.
        // If operator is not NOT, both truth values are needed.
        // Truth values are then asked from the user.
        if (op == '!')
        {
            cout << "Enter the truth value of P to apply NOT operator (0 for false, 1 for true)\nValue of P: ";
            cin >> p;
            q = false; // Not used in this case
        }
        else
        {
            cout << "Enter the truth value of P (0 for false, 1 for true)\nValue of P: ";
            cin >> p;

            cout << "Enter the truth value of Q (0 for false, 1 for true)\nValue of Q: ";
            cin >> q;
        }

        // Result of the operation is calculated and displayed
        cout << "\n***** EVALUATING YOUR PROPOSITION *****\n";
        LogicOperations logic(p, q);

        // Results are displayed based on the operator
        if (op == '!')
            cout << "Negation (NOT P) is: " << logic.Negation() << endl;

        else if (op == '&')
            cout << "Conjunction (P AND Q) is: " << logic.Conjunction() << endl;

        else if (op == '|')
            cout << "Disjunction (P OR Q) is: " << logic.Disjunction() << endl;

        else if (op == '>')
            cout << "Implication (P IMPLIES Q) is: " << logic.Implication() << endl;

        else if (op == '=')
            cout << "Biconditional (P IF AND ONLY IF Q) is: " << logic.Biconditional() << endl;

        // Truth table for the operation is printed
        logic.printTruthTable(op);

        // Asking the user if they want to continue or not
        cout << "\nWould you like to evaluate another proposition? Please enter 'Y' for Yes and 'N' for No: ";
        cin >> exitLoop;
    } while (toupper(exitLoop) == 'Y'); // The loop will continue as long as the user enters 'y' or 'Y'
}

int main()
{
    char mode;

    cout << "***** Welcome to the Propositional Logic Assistant! *****\n";
    do
    {
        // Allow the user to choose between Calculator mode and Quiz mode
        cout << "\nPlease select the mode you'd like to use:\n"
             << "'C' for CALCULATOR\n"
             << "'Q' for QUIZ\n"
             << "'E' for EXIT\n"
             << "Enter mode: ";
        cin >> mode;
        mode = toupper(mode); // Convert to upper case for consistency

        switch (mode)
        {
        case 'C':
            // Calculator mode
            calculatorMode();
            break;
        case 'Q':
            // Quiz mode
            askUserQuestions();
            break;
        case 'E':
            // Exit the program
            cout << "\n***** Thank you for using the Propositional Logic Assistant! Have a great day! *****\n";
            return 0;
        default:
            // If the user entered an unrecognized mode, display an error message
            cout << "\nError: The mode you entered is not recognized! Please try again with a valid mode.\n";
            break;
        }

        // Ask the user if they want to switch mode or exit the program
        cout << "\nWould you like to switch mode or exit the program? Please enter 'Y' for Yes and 'N' for No: ";
        cin >> mode;
    } while (toupper(mode) != 'N'); // If the user enters 'N' or 'n', exit the program

    cout << "\n***** Thank you for using the Propositional Logic Assistant! Have a great day! *****\n";
    return 0;
}