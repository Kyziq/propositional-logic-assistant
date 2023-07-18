/******************************************************
 * Course:     CSC510 DISCRETE STRUCTURE                *
 *                                                      *
 * Members:                                             *
 * 1. MUHAMAD ADIB ASYRAAF BIN AZIS                     *
 *    Student ID: 2023126433                            *
 *    Group: RCDCS2513B                                 *
 *                                                      *
 * 2. MUHAMMAD KHAIRUL HAZIQ BIN MOHAMAD KHAIRI         *
 *    Student ID: 2023164629                            *
 *    Group: RCDCS2513B                                 *
 *                                                      *
 * 3. MUHAMMAD AYSAR BIN MAHMAD YUSUP                   *
 *    Student ID: 2023189277                            *
 *    Group: RCDCS2513B                                 *
 *                                                      *
 * Selected theory:                                     *
 * Propositional Logic                                  *
 *                                                      *
 * Title:                                               *
 * Propositional Logic Assistant                        *
 ******************************************************/

#include <iostream>
using namespace std;

// Class to handle Logical Operations
class LogicOperations
{
private:
    bool p, q;

public:
    // Constructor
    LogicOperations(bool p, bool q)
    {
        this->p = p;
        this->q = q;
    }

    // Function to perform Negation operation, ¬p
    // This operation takes a single Boolean value and inverts it.
    // That is, if p is true (1), it becomes false (0), and vice versa.
    // Example: if p is true, then ¬p is false.
    bool Negation()
    {
        return !p;
    }

    // Function to perform Conjunction operation, p ∧ q
    // This operation takes two Boolean values and returns true if both are true, and false otherwise.
    // It's often called "and" operation.
    // Example: if p is true and q is true, then p ∧ q is true.
    bool Conjunction()
    {
        return p && q;
    }

    // Function to perform Disjunction operation, p ∨ q
    // This operation takes two Boolean values and returns true if either or both are true, and false otherwise.
    // It's often called "or" operation.
    // Example: if p is false and q is true, then p ∨ q is true.
    bool Disjunction()
    {
        return p || q;
    }

    // Function to perform Biconditional operation, p ↔ q
    // This operation takes two Boolean values and returns true if both are identical, and false otherwise.
    // It's often called "if and only if" operation.
    // Example: if p is true and q is true, then p ↔ q is true.
    bool Biconditional()
    {
        return (p && q) || (!p && !q);
    }

    // Function to perform Implication operation, p → q
    // This operation takes two Boolean values and returns true if the first value implies the second.
    // That is, it's false only when p is true and q is false, and true otherwise.
    // It's often called "if...then" operation.
    // Example: if p is true and q is false, then p → q is false.
    bool Implication()
    {
        return !p || q;
    }

    // Function to print truth table based on the chosen operation
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
            cout << "Truth Table for COJUNCTION operation (p AND q)" << endl;
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

void askUserQuestions()
{
    int answer;
    int userAnswer;

    cout << "\n***** INTERACTIVE MODE *****\n";
    cout << "Let's test your propositional logic skills with some problems.\n";

    cout << "\nQuestion 1: What is the result of the operation NOT (P AND Q) if P is true and Q is false? (Enter 1 for true, 0 for false)\n";
    LogicOperations logic1(true, false);
    answer = !logic1.Conjunction(); // Performing NOT (P AND Q)
    cin >> userAnswer;
    if (userAnswer == answer)
    {
        cout << "Correct! Great job.\n";
    }
    else
    {
        cout << "Incorrect. The correct answer is " << answer << ".\n";
    }

    cout << "\nQuestion 2: What is the result of the operation (P OR Q) if P is false and Q is false? (Enter 1 for true, 0 for false)\n";
    LogicOperations logic2(false, false);
    answer = logic2.Disjunction();
    cin >> userAnswer;
    if (userAnswer == answer)
    {
        cout << "Correct! Great job.\n";
    }
    else
    {
        cout << "Incorrect. The correct answer is " << answer << ".\n";
    }
}

void calculatorMode()
{
    char op;
    bool p, q;
    char exitLoop;

    do
    {
        cout << "\nPlease select the logical operator you'd like to use:\n"
             << "'!' for NEGATION (NOT)\n"
             << "'&' for CONJUNCTION (AND)\n"
             << "'|' for DISJUNCTION (OR)\n"
             << "'>' for IMPLICATION (IMPLIES)\n"
             << "'=' for BICONDITIONAL (IF AND ONLY IF)\n"
             << "Enter Operator: ";
        cin >> op;

        if (op != '!' && op != '&' && op != '|' && op != '>' && op != '=')
        {
            cout << "\nError: The operator you entered is not recognized! Please try again with a valid operator.\n";
            continue;
        }

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

        cout << "\n***** EVALUATING YOUR PROPOSITION *****\n";
        LogicOperations logic(p, q);

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

        logic.printTruthTable(op);

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
            // Exit
            cout << "\n***** Thank you for using the Propositional Logic Assistant! Have a great day! *****\n";
            return 0;
        default:
            cout << "\nError: The mode you entered is not recognized! Please try again with a valid mode.\n";
            break;
        }

        cout << "\nWould you like to switch mode or exit the program? Please enter 'Y' for Yes and 'N' for No: ";
        cin >> mode;
    } while (toupper(mode) != 'N');

    cout << "\n***** Thank you for using the Propositional Logic Assistant! Have a great day! *****\n";
    return 0;
}