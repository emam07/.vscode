#include <iostream>
using namespace std;
class shop
{
    int item_id[100];
    // char item_name[50];
    int item_price[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setprice(void);
    void showprice(void);
};
void shop::setprice(void)
{
    cout << "enter the id of item:" << counter + 1 << endl;
    cin >> item_id[counter];
    // cout << "enter the name of item:" << endl;
    //  cin>>item_name[counter];
    cout << "enter the price of the item:" << endl;
    cin >> item_price[counter];
    counter++;
}
void shop::showprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the item id is:" << item_id[i] << endl
             << "item price is:" << item_price[i] << endl;
    }
}
int main()
{
    shop dukaan;
    dukaan.initcounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.showprice();
    return 0;
}