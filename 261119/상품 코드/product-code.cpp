#include <iostream>
#include <string>
using namespace std;
class product{
    public:
        string name;
        int code;
        product(string name="codetree",int code=50){
            this->name=name;
            this->code=code;
        }
};

int main() {
    product product1=product();
    product product2=product();
    string name;
    int code;
    cin>>name>>code;
    product2.code=code;
    product2.name=name;
    cout<<"product "<<product1.code<<" is "<<product1.name<<endl;
    cout<<"product "<<product2.code<<" is "<<product2.name<<endl;
    // Please write your code here.
    return 0;
}