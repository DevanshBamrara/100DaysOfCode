#include <iostream>
using namespace std;

class Rectangle{

    private:
    int length;
    int breadth;

    public:

    Rectangle(int l = 0, int b = 0){
        setLength(l);
        setBreadth(b);
    }
    
    Rectangle(Rectangle &rec){
        length = rec.length;
        breadth = rec.breadth;
    }

    void setLength(int l){
        if(l>0){
            length = l;
        }
        else{
            cout<<"It can't be Negative, Default taken as 1."<<endl;
            length = 1;
        } 
    }

    void setBreadth(int b){
        if(b>0){
            breadth = b;
        }
        else{
            cout<<"It can't be Negative, Default taken as 1."<<endl;
            breadth = 1;
        } 
    }

    int area(){
        return length*breadth;
    }

    int perimeter(){
        return 2*(length+breadth);
    }
};

int main(){
    Rectangle r(2,4);
    Rectangle r2(r);
    cout<<r2.area();
    return 0;
}
