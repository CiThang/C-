// Constants_Hangso.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    // 1. Khai bao hang
    const int DOSOI = 100;
    const int DODONG = 0;

    std::cout << "Nhiet do soi = " << DOSOI<<std::endl;
    std::cout << "Nhiet do dong = " << DODONG<<std::endl;

 //   DODONG = 10;


    //2. Type promotion
    int a = 0;
    double b = 7.5;
    // Xuat thu a+b
    std::cout << "a+b " << a + b << std::endl;

    //khai bao bien kq de nhan ke qua la tong
    int kq;
    kq = a + b;
    std::cout << "a+b= " << kq << std::endl;

    double kq1;
    kq1 = a + b;
    std::cout << "a+b = " << kq1 << std::endl;
    return 0;
}

