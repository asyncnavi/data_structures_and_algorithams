#include <iostream>

using namespace std;


// With & operator
void calculate_price(double &prod_price)
{

    double gst = prod_price * 0.18;
    prod_price = prod_price + gst;

}


// with pointer operator
void watch_video(int * view) {

    *view = *view + 1;
}

int main()
{

    
    double base_rate;
    cout << "Enter the base price of product" << endl;
    cin >> base_rate;
    calculate_price(base_rate);
    cout << "Final Price : " << base_rate << endl;
    int view = 100;
    watch_video(&view);
    cout << "Total views : " << view << endl;
    return 0;
}