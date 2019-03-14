#pragma once

class Calculator
{
public:
    double add(double operand_a, double operand_b);
    double substract(double operand_a, double operand_b);
};

////template<typename T>
//template <class T>
//class Calculator
//{
//public:
//    T add(T operand_a, T operand_b);
//    T subtract(T operand_a, T operand_b);
//};

//template<class T>
//T Calculator<T>::add(T operand_a, T operand_b)
//{
//    return operand_a + operand_b;
//}

//template<class T>
//T Calculator<T>::subtract(T operand_a, T operand_b)
//{
//    return operand_a - operand_b;
//}
