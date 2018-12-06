void swap_v(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap_r(int& a, int& b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

// void swap_cr(const int& a, const int& b) - hibás szintax, le sem fordul
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }

int main()
{
    int x = 7;
    int y = 9;
    
    // swap_v(x, y); - lefordul, de nem hajtja végre a cserét
    swap_r(x, y);    // OK
    // swap_v(7, 9); - lefordul, de nem hajtja végre a cserét
    // swap_r(7, 9); // le sem fordul

    // Output message: 
    cout << "x is now " << x << " and y is now " << y << '\n';

    const int cx = 7;
    const int cy = 9;

    // swap_v(cx, cy); - lefordul, de nem hajtja végre a cserét
    // swap_r(cx, cy); - le sem fordul

    
    // swap_v(7.7, 9.9); - lefordul, de nem hajtja végre a cserét
    // swap_r(7.7, 9.9); - le sem fordul

    // output message. 
    cout << "cx is now " << cx << " and cy is now " << cy << '\n';

double dx = 7;
    double dy = 9;

    // swap_v(dx, dy); - lefordul, de nem hajtja végre a cserét
    // swap_r(dx, dy); - le sem fordul
    //output message. 
    cout << "dx is now " << dx << " and dy is now " << dy << '\n';

    return 0;
}
