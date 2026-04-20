#include <iostream>
#include <cmath>
using namespace std;
main()
{
    float pi = 3.14, height, angle;
    int distance;
    cout << "Enter The Horrizontal distance  of tree:";
    cin >> distance;
    cout << "Enter The angle of tree (in degrees):";
    cin >> angle;
    float angle_degree;
    angle_degree = angle * (pi / 180);
    height = distance * tan(angle_degree);
    cout << "Height of Tree: is " << height;
    return 0;
}