#include <iostream>
#include <string>

using namespace std;
class Info{
    public:
    string product_name;
    int product_code;

    Info(string product_name="codetree",int product_code=50){
        this->product_name=product_name;
        this->product_code=product_code;
    }
};


int main() {
    string product_name;
    int product_code;
    cin >> product_name >> product_code;
    Info info1=Info();
    cout<<"product "<<info1.product_code<<" is "<<info1.product_name<<endl;

    Info info2=Info(product_name,product_code);
    cout<<"product "<<info2.product_code<<" is "<<info2.product_name;


    // Please write your code here.

    return 0;
}